#include "comm.h"
#include <math.h>       //sqrt()
#include <stdio.h>      //sprintf()
#include <curl/curl.h>  //libcurl
//this function takes in rms value of 1s, each is calculated by 16000/80-200 samples
//but the funtion will re-calculate 8 pieces of rms values, each corresponding to 2000 samples or 125ms of sound
void sendToServer(double r80[]){
        double r8[8], sum;
        int i, j;       //loop counters
        CURL *curl;
        CURLcode res;
        char post[1000];
        for(i=0; i<8; i++){             //to calculate 8 pieces of fast values
                sum = 0;
                for(j=0;j<10;j++){
                        sum += r80[j+i*10]*r80[j+i*10]*200;
                }
                r8[i] = sqrt(sum/2000);
        }
        //prepare post data
        sprintf(post, "data=%.2f;%.2f;%.2f;%.2f;%.2f;%.2f;%.2f;%.2f", r8[0], r8[1], r8[2], r8[3], r8[4], r8[5], r8[6], r8[7]);
        //send data
        curl_global_init(CURL_GLOBAL_ALL);      // sets up program environoment that libcurl needs
        curl = curl_easy_init();        // returns a CURL easy handle
        if(curl){
                curl_easy_setopt(curl, CURLOPT_URL,"http://www.cc.puv.fi/~e1700701/sound.php" );        // sets options for a curl easy handle
                curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post);
                res = curl_easy_perform(curl);  // performs a blocking file transfer
                if(res != CURLE_OK)
                        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                                curl_easy_strerror(res));       // returns string describling error code
                curl_easy_cleanup(curl);        // ends a libcurl eaasy handle
        }       //end of if
        curl_global_cleanup();
}


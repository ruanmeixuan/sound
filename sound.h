//#define DEBUG
// constant def
#define SAMPLERATE 16000
// header file for processing sound (WAV) file.
// define the wav header

typedef struct{         // creates a synonym for char, int, unsigned int, unsigned short
        char chunkID[4];        // "RIFF"
        unsigned int chunkSize; // 4 bytes
        char format[4]; // "WAVE"
        char subchunk1ID[4];    // "fmt "
        unsigned int subchunk1Size;
        unsigned short audioFormat;
        unsigned short numChannels;
        unsigned int sampleRate;
        unsigned int byteRate;
        unsigned short blockAlign;
        unsigned short bitsPerSample;
        char subchunk2ID[4];
        unsigned int subchunk2Size;
}WAVHeader;
// function prototypes
void displayWAVheader(char filename[]);
void displayBar(char filename[]);
void printID(char []);


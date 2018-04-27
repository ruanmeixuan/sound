// contains screen manipulation func, such as clearScreen(), gotoxy(),
// setColor(), etc

#include "screen.h"
#include <stdio.h>
#include "comm.h"
/*
        Function definition of clearScreen()
        This function will use VT100 escape sequence "\ESC[2J" to erase the total
        terminal screen
        input argument: none
        return argument: none
*/
void clearScreen(void){
        printf("%c[2J", ESC);
        fflush(stdout);
}
/*
        Function definition of gotoxy()
        This function use VT100 escape sequence "\ESC[row;colH" to set the cursor
        to the specific location of terminal screen
        input argument:
                int row: row number (1 is top)
                int col: col number (1 is left)
        return argument: none
*/

void gotoxy(int row, int col){
        printf("%c[%d;%dH", ESC, row, col);
        fflush(stdout);
}

/*
        Function definition of bar()
        This function is used to draw a 2-dimensional, rectangular filled in bar
        input argument:
                int col: column number
                double dB: sound level
        return argument: none
*/
void bar(int col, double dB){
        int i;
        for (i = 0; i < dB/4; i++){
                gotoxy(25-i, col);      // the first bar starts from col = 1

//#ifndef UNICODE
//              printf("%c", '*');
//#else
                if(i < 60/4){
                        setColor(WHITE);
                }else if(i < 80/4){
                        setColor(YELLOW);
                }else{
                        setColor(RED);
                }
                printf("%s", BAR);
//#endif
        }

}
/*
Function definition of setColor()
        This function use VT100 escape sequence to set the color
        Input argument:
                int color: name of the color
        Return argument: none
*/
void setColor(int color)
{
        printf("%c[1;%dm", ESC, color);
        fflush(stdout);
}

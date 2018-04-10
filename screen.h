#define ESC 0x1B
#define BAR "\u2590"
//#define UNICODE

typedef enum FGCOLORS {BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
// function prototypes
// contains screen manipulation func, such as clearScreen(), gotoxy(),
// setColor(), etc

void clearScreen(void);
void gotoxy(int, int);
void bar(int, double);
void setColor(int);

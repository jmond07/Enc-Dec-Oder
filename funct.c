#include <stdio.h>
#include <windows.h>
#include <stdlib.h>


#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_SCREEN() system("cls")
    #define SLEEP_SEC(s) Sleep((s) * 1000)
#else
    #include <unistd.h>
    #define CLEAR_SCREEN() printf("\033[H\033[J")
    #define SLEEP_SEC(s) sleep(s)
#endif

void start(){
    CLEAR_SCREEN();
    printf("Starting the program");
    for(int i = 0; i < 3; i++) {
        SLEEP_SEC(1);
        printf(".");
    }
    printf("\n");
    SLEEP_SEC(2);
    CLEAR_SCREEN();
}

void set_color(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
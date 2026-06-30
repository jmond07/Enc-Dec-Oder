#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "funct.c"
#include "funct.h"

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_SCREEN() system("cls")
    #define SLEEP_SEC(s) Sleep((s) * 1000)
#else
    #include <unistd.h>
    #define CLEAR_SCREEN() printf("\033[H\033[J")
    #define SLEEP_SEC(s) sleep(s)
#endif

int main(void){
    start();
    

    set_color(4);
    printf("This text is red\n");
    SLEEP_SEC(4);
    set_color(7); // Reset to default color
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>


char name[] = "";
int health = 100;
int main() {
    

    printf("H");
    fflush(stdout);
    Sleep(500);
    printf("e");
    fflush(stdout);
    Sleep(500);
    printf("l");
    fflush(stdout);
    Sleep(500);
    printf("l");
    fflush(stdout);
    Sleep(500);
    printf("o");
    fflush(stdout);
    Sleep(500);

    system("cls");

    Sleep(1000);
    printf("W");
    fflush(stdout);
    Sleep(500);
    printf("h");
    fflush(stdout);
    Sleep(500);
    printf("a");
    fflush(stdout);
    Sleep(500);
    printf("t");
    fflush(stdout);
    Sleep(500);

    printf(" I");
    fflush(stdout);
    Sleep(500);
    printf("s");
    fflush(stdout);
    Sleep(500);

    printf(" Y");
    fflush(stdout);
    Sleep(500);
    printf("o");
    fflush(stdout);
    Sleep(500);
    printf("u");
    fflush(stdout);
    Sleep(500);
    printf("r");
    fflush(stdout);
    Sleep(500);

    printf(" N");
    fflush(stdout);
    Sleep(500);
    printf("a");
    fflush(stdout);
    Sleep(500);
    printf("m");
    fflush(stdout);
    Sleep(500);
    printf("e");
    fflush(stdout);
    Sleep(500);

    printf("? ");
    fflush(stdout);
    Sleep(500);
    scanf("%s", name);
    Sleep(500);
    printf("Okay %s, lets hop onto an adventure! [PRESS B]", name);
    while (1) {
        if (GetAsyncKeyState('B') & 0x8000) {
            startgame();
            Sleep(200);
        }}

  while(1){
        Sleep(1000);
    }
return 0;
}

int startgame() {
    system("cls");
    printf("%s : %d/100 health \n", name, health);
    printf("It was a dark night, you, %s, were walking through the woods, when you suddenly heard a noise, it was a scream, a woman's scream, it camed from the abandoned house everyone was scared of, but the curiosity got the best of you, so you decided to go there. This is a mistake, maybe even your last one, but you dont know that yet.\n", name);
    Sleep(5000);

}
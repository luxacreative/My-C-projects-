//ABANDOED, MOVED ON OTHER THINGS ( SEE IN THE REPO )


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
    Sleep(10000);
    printf("As yoo opened the door, you see a bloddy knife on the floor, you pick it up, and suddently, you hear a noise from the kitchen\n");
    printf("You slowly aprouch the kitchen door and open it.\n");
    printf("There is a black cat there, it looks at you and runs away, you follow it, and it leads you to a room with a bed, a half open closet and a window.\n");
    printf("You see a shadow from the closet, the closet door open by itself, and then, a 2 meter tall black creature comes out of it, and it looks at you with its red eyes, and then suddently, it jumpes at you, but you manage to dodge it, and run away, and the chassing begins:[PRESS W to run]\n");
    Sleep(20000);
    system("cls");
    printf("%s : %d/100 health \n", name, health);
    while (1) {
        if (GetAsyncKeyState('W') & 0x8000) {
            printf("You moved forward\n");
            Sleep(200);
        }}



}
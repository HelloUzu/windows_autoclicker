#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main(void){

    system("cls");
    int ms = 0;

    printf("        / ***************** \\\n");
    printf("             Uzu Clicker       \n");
    printf("        / ***************** \\\n");
    ms = printf("\n[+] Milliseconds for Autoclicker: ");
    scanf("%i", &ms);
    printf("[+] Press F8 to init and stop.\n");

    do{
        while(GetAsyncKeyState(0x77)){
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(ms);
        }while(GetAsyncKeyState(0x23)){
            return 1;
        }
    }while(true);
    return 0;
}   
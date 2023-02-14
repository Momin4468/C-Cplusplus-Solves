#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>



int i, j;

void main(){
    for(i=10/2; i<=10; i=i+2)
    {
        for(j=1; j<10-i; j=j+2)
        {
            printf(" ");
            Sleep(50);
        }
        Sleep(100);
        for(j=1; j<=i; j++)
        {
            printf("*");
            Sleep(50);
        }

        for(j=1; j<=10-i; j++)
        {
            printf(" ");
            Sleep(50);
        }
        Sleep(100);
        for(j=1; j<=i; j++)
        {
            printf("*");
            Sleep(50);
        }

        printf("\n");
    }
    Sleep(100);
    for(i=10; i>=1; i--)
    {

        for(j=i; j<10; j++)
        {
            printf(" ");
            Sleep(50);
        }
        Sleep(100);
        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
            Sleep(50);
        }
        Sleep(100);
        printf("\n");
    }
    Sleep(3000);

}

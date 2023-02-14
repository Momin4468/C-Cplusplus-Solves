#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <iostream>
using namespace std;

int i, j;

void heart(){
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
}

void cake(){
    cout<<"     *        *        *\n    ***      ***      ***"<<endl;
    Sleep(100);
    for (int x=0; x<3; x++)
    {
    cout<<"    |-|      |-|      |-|"<<endl;
    Sleep(100);
    }
    cout<<"____|-|______|-|______|-|___"<<endl;
    cout<<"|==========================|"<<endl;
    Sleep(100);
    for(int x=0; x<2; x++)
    {
    cout<<"|      HAPPY BIRTHDAY      |\n|~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    Sleep(200);
    }
    Sleep(2000);
}

 main()
{

system("color 7D");
heart();
Sleep(2000);
printf("\n\n Press any key baby girl.....\n\n");
getch();

cake();
printf("\n\n Press any key Jannat.....\n\n");
getch();


system("CLS");
system("color 1f");



 printf("\n\n");
 printf("\n\n\tRubaida Islam Jannat,\t\t\n");
 printf("\n\t\t********************\t\t\n");
 printf("\t\tHAPPY BIRTHDAY BABBU\t\t\n");
 printf("\t\t....................\t\t\n");
 printf("\t\tOur little Princess...Jaan :3");
 printf("\n\n\t\t Yeeaaaaaaaaa.......\n\t\tHappy 2 years Beasty......\n\n\n");


cake();
printf("\n\n");
heart();
printf("\n\n Tatta Daee....\n\n");
getch();


}

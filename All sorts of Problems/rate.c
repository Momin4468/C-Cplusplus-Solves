#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

#define MAXUSERNAMECAR 30
#define MAXPASSWORDCAR 30
#define MAXNAMECAR 50
#define MAXPHNCAR 30
#define MAXEMAILCAR 50
#define MAXADRSSCAR 50
#define MAXIDCAR 30


typedef struct info
{
    char name[MAXNAMECAR], userid[MAXUSERNAMECAR], password[MAXPASSWORDCAR];
    char phone[MAXPHNCAR], email[MAXEMAILCAR], adrs[MAXADRSSCAR], id[MAXIDCAR];


} info;

typedef struct info12
{
    char userid[MAXUSERNAMECAR];
    char rate[MAXPASSWORDCAR];


} info12;




void rate(){

    info12 account1;
    info fileaccount;
    int accountfound=0;


    printf("\n\n\t\t\t\t\aWELCOME TO RATING ZONE\a");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("************************************\n\n");

    FILE *acnt;
    FILE *acnt11;
    int usernamefound=0;

    acnt = fopen("mumin.bin", "r");

    acnt11 = fopen("mumin11.bin", "a+");
    if(acnt11==NULL)
    {
        acnt11 = fopen("mumin11.bin", "w+");
    }

    fflush(stdin);

    printf("\t\tEnter your Username:\n\t\t");
    fgets(account1.userid, MAXUSERNAMECAR, stdin);

    printf("\n\t\tRate the program from 1 to 10:\n\t\t");
    fgets(account1.rate, MAXPASSWORDCAR, stdin);

    fwrite(&account1, sizeof(info12), 1, acnt11);

    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account1.userid, MAXUSERNAMECAR)==0 && strncmp(fileaccount.password, account1.rate, MAXPASSWORDCAR)==0 )
        {
            printf("\n\aOops! It seems the username already exists.\n");
            printf("Means you already have rated it. Thanks Again.\n\n");
            usernamefound=420;
            fclose(acnt);
            getch();
            break;
        }

     else{

           fclose(acnt11);

           printf("\n\n\n\t\t\tThanks For Your Rating. :)\n");
           getch();
           break;
        }


    }
    return;

}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

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

void logintch();
void regitch()
{
    info account;
    info fileaccount;
    int usernamefound=0;
    FILE *acnt;


    printf("\n\n\t\t\t\t\aWELCOME TO REGISTER ZONE.");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^");

    acnt = fopen("registrationteacher.bin", "a+");
    if(acnt==NULL)
    {
        acnt = fopen("registrationteacher.bin", "w+");
    }

    fflush(stdin);



    printf("\nMake a user ID (6-25 characters):\n");
    fgets(account.userid, MAXUSERNAMECAR, stdin);

    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0)
        {
            printf("\n\aOops! It seems the username already exists. Try a different one\n\n");
            usernamefound=420;
            getch();
            regitch();
        }
    }

    printf("\n\nEnter your name\n");
    fgets(account.name, MAXNAMECAR, stdin);


    printf("\nPick a strong password (6-18 characters): \n");
    fgets(account.password, MAXPASSWORDCAR, stdin);


    printf("\nEnter Your Phone Number: \n");
    fgets(account.phone, MAXPHNCAR, stdin);



    printf("\nEnter Your Address: \n");
    fgets(account.adrs, MAXADRSSCAR, stdin);



    printf("\nEnter Your E-mail: \n");
    fgets(account.email, MAXEMAILCAR, stdin);




    if(usernamefound==0)
    {
        fwrite(&account, sizeof(info), 1, acnt);
    }
    fclose(acnt);

    printf("\n\t\t--------------------------------------------------------------");
    printf("\n\t\tYou have succesfully registered to this program.\n\t\tPress any key to continue\n");
    char C8;
    if((C8=getch())==13)
        {
        system("CLS");
        printf("\n\n\t\t\aYou are successfully registered.");
        printf("\n\n\t\tTo access the program you must login\n\n\t\t");
        printf("\n\n\t\tSo do you want login your account or exit now and go away??\n\n\t\t");
        printf("> PRESS 1 FOR YES & LogIn\n\n\t\t  > PRESS 2 FOR NO & Go & Sleep\n\n\t\t\t\t");
        scanf("%d",&n5);
        switch(n5)
          {
              case 1: system("CLS");
                    login();
                    break;
              case 2: system("CLS");
                    printf("\n\n\n\t\t\t\t\t\aTHANK YOU FOR REGISTERING.\n");
                    printf("\t\t\t\t\tWish to see You again!!\n\n");
                    break;
          }
        }


}

void logintch()
{

    info account;
    info fileaccount;
    int accountfound=0;


    printf("\n\n\t\t\t\t\aWELCOME TO LOG IN ZONE\a");
    printf("\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^");
    printf("************************************\n\n");

    FILE *acnt;

    fflush(stdin);
    printf("\t\tEnter your Username:\n\t\t");
    fgets(account.userid, MAXUSERNAMECAR, stdin);
    printf("\n\t\tEnter Password:\n\t\t");
    fgets(account.password, MAXPASSWORDCAR, stdin);


    acnt = fopen("registrationteacher.bin", "r");
    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0 && strncmp(fileaccount.password, account.password, MAXPASSWORDCAR)==0)
        {
            system("CLS");
            printf("\n\t\t\t\aYou Have Successfully Logged In\n\n");
            printf("\n\n\n\t\t\t\tNow Go Through the main Program. :)\n");
            accountfound=123;
            getch();
            break;
        }
    }
    if(accountfound==0)
    {
        printf("\n\n\t\aLogin not Succesful\n");
        printf("\tIncorrect Username or Password,or\n");
        printf("\tYou are not a Registered User\n\n");
        printf("\n\tPress 1 to try again or any key to go to the registration page\n");
        fclose(acnt);
        int unlog;
        scanf("%d", &unlog);
        switch(unlog)
        {
        case 1:
            logintch();
            break;
        default:
            regitch();
            break;
        }

    }
}

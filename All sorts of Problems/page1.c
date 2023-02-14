#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAXUSERNAMECAR 30
#define MAXPASSWORDCAR 30
#define MAXNAMECAR 50

typedef struct info
{
    char name[40], userid[30], password[20];


}info;

void nxt()
{
    system("cls");

    system("COLOR 0D");


    int i, j;



    for(i=10/2; i<=10; i=i+2)
    {
        for(j=1; j<10-i; j=j+2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=10-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=10; i>=1; i--)
    {
        for(j=i; j<10; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }



    printf("\n\n\tHello miss SHITUL BHUIYAN\t\t\t\n\n\n");


    for(i=10/2; i<=10; i=i+2)
    {
        for(j=1; j<10-i; j=j+2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=10-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=10; i>=1; i--)
    {
        for(j=i; j<10; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n\n\teitukui korsi\n");
    getch();

}

void regist()
{
    system("cls");
    system("COLOR 30");
    info account;
    info fileaccount;
    int usernamefound=0;
    FILE *acnt;

printf("\n\n\t\t\t*******************************");
    printf("**********************************\n");
    printf("\t\t\t   ***********************************************************\n\n");
    printf("\t\t\t     ----------------------------------------");
    printf("------------\n");
    printf("\t\t\t\t    ^-^ ^-^ ^-^****E-LEARN****^-^ ^-^ ^-^\n");
    printf("\t\t\t\t    --------------------------------------\n\n");
    printf("\t\t\t\t\t   #######################\n\n");
    printf("\t\t\t\t\t   Student Registration Page\n\n");
     printf("\t\t\t   ***********************************************************\n");

     printf("\t\t\t*******************************");
    printf("**********************************\n\n");


    fflush(stdin);
    printf("\n\nEnter your name\n");
    fgets(account.name, MAXNAMECAR, stdin);

    printf("\nMake a user ID (6-25 characters):\n");
    fgets(account.userid, MAXUSERNAMECAR, stdin);
    printf("\nPick a strong password (6-18 characters): \n");
    fgets(account.password, MAXPASSWORDCAR, stdin);

    acnt = fopen("registrationstudent.bin", "a+");
    if(acnt==NULL)
    {
        acnt = fopen("registrationstudent.bin", "w+");
    }
    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0)
        {
            printf("\nOops! It seems the username already exists. Try a different one\n\n");
            usernamefound=420;
            break;
        }
    }
    if(usernamefound==0)
    {
        fwrite(&account, sizeof(info), 1, acnt);
    }
    fclose(acnt);

    printf("\n\t\t--------------------------------------------------------------");
    printf("\n\t\tYou have succesfully registered to elearn.\n\t\tPress any key to continue\n");
    getch();
    nxt();

}


void loginst()
{
    system("cls");
    system("COLOR 30");

     info account;
    info fileaccount;
    int accountfound=0;

     printf("\n\n\t\t\t*******************************");
    printf("**********************************\n");
    printf("\t\t\t   ***********************************************************\n\n");
    printf("\t\t\t     ----------------------------------------");
    printf("------------\n");
    printf("\t\t\t\t    ^-^ ^-^ ^-^****E-LEARN****^-^ ^-^ ^-^\n");
    printf("\t\t\t\t    --------------------------------------\n\n");
    printf("\t\t\t\t\t   #######################\n\n");
    printf("\t\t\t\t\t     Student Login Page\n\n");
     printf("\t\t\t   ***********************************************************\n");

     printf("\t\t\t*******************************");
    printf("**********************************\n\n");


    FILE *acnt;

    fflush(stdin);
    printf("\t\tEnter your Username:\n\t\t");
    fgets(account.userid, MAXUSERNAMECAR, stdin);
    printf("\n\t\tEnter Password:\n\t\t");
    fgets(account.password, MAXPASSWORDCAR, stdin);


    acnt = fopen("registrationstudent.bin", "r");
     while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0 && strncmp(fileaccount.password, account.password, MAXPASSWORDCAR)==0)
        {
            printf("\n\t\t\t You Have Successfully Logged In\n\n");
            printf("\t\tPress any key......\n\n");
            accountfound=123;
            getch();
            nxt();
            break;
        }
}
if(accountfound==0)
{
    printf("\n\n\tLogin not Succesful\n");
    printf("\tLooks like you haven't registered yet\n");
    printf("\n\tPress any key to go to the registration page\n");
     fclose(acnt);
    getch();
    regist();

}
    /*fclose(acnt);
    getch();
    registr();*/



}



void student()
//void student
{
    system("cls");
    system("COLOR 30");
    printf("\n\n\t\t\t*******************************");
    printf("**********************************\n");
    printf("\t\t\t   ***********************************************************\n\n");
    printf("\t\t\t     ----------------------------------------");
    printf("------------\n");
    printf("\t\t\t\t    ^-^ ^-^ ^-^****E-LEARN****^-^ ^-^ ^-^\n");
    printf("\t\t\t\t    --------------------------------------\n\n");
    printf("\t\t\t\t\t   #######################\n\n");
    printf("\t\t\t\t\t           STUDENT\n\n");
     printf("\t\t\t   ***********************************************************\n");

     printf("\t\t\t*******************************");
    printf("**********************************\n\n");
   printf("\t\t\t\t\t\t1.LOGIN\n\n\t\t\t\t\t  2.Create New Account\n\n\n\t\t\t\t\t\tCHOOSE: ");

int prof;
scanf("%d", &prof);
switch(prof)
    {
    case 1:
        {
            loginst();
            break;
        }
    case 2:
        {
            regist();
            break;
        }
    default:
        {
             printf("\n\n\t\t\t\tInvalid Option. Please try again\n\n");
                getch();
                main();
                break;
        }
    }



    getch();
}

void regitch()
{
    system("cls");
    system("COLOR A0");
    info account;
    info fileaccount;
    int usernamefound=0;
    FILE *acnt;


    printf("\n\n\t\t\t*******************************");
    printf("**********************************\n");
    printf("\t\t\t   ***********************************************************\n\n");
    printf("\t\t\t     ----------------------------------------");
    printf("------------\n");
    printf("\t\t\t\t    ^-^ ^-^ ^-^****E-LEARN****^-^ ^-^ ^-^\n");
    printf("\t\t\t\t    --------------------------------------\n\n");
    printf("\t\t\t\t\t   #######################\n\n");
    printf("\t\t\t\t\t   Teacher Registration Page\n\n");
     printf("\t\t\t   ***********************************************************\n");

     printf("\t\t\t*******************************");
    printf("**********************************\n\n");

    fflush(stdin);
    printf("\n\nEnter your name\n");
    fgets(account.name, MAXNAMECAR, stdin);

    printf("\nMake a user ID (6-25 characters):\n");
    fgets(account.userid, MAXUSERNAMECAR, stdin);
    printf("\nPick a strong password (6-18 characters): \n");
    fgets(account.password, MAXPASSWORDCAR, stdin);

    acnt = fopen("registrationteacher.bin", "a+");
    if(acnt==NULL)
    {
        acnt = fopen("registrationteacher.bin", "w+");
    }
    while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0)
        {
            printf("\nOops! It seems the username already exists. Try a different one\n\n");
            usernamefound=420;
            break;
        }
    }
    if(usernamefound==0)
    {
        fwrite(&account, sizeof(info), 1, acnt);
    }
    fclose(acnt);

    printf("\n\t\t--------------------------------------------------------------");
    printf("\n\t\tYou have succesfully registered to elearn.\n\t\tPress any key to continue\n");
    getch();
    nxt();

}

void logintch()
{
    system("cls");
    system("COLOR 30");

     info account;
    info fileaccount;
    int accountfound=0;

     printf("\n\n\t\t\t*******************************");
    printf("**********************************\n");
    printf("\t\t\t   ***********************************************************\n\n");
    printf("\t\t\t     ----------------------------------------");
    printf("------------\n");
    printf("\t\t\t\t    ^-^ ^-^ ^-^****E-LEARN****^-^ ^-^ ^-^\n");
    printf("\t\t\t\t    --------------------------------------\n\n");
    printf("\t\t\t\t\t   #######################\n\n");
    printf("\t\t\t\t\t     Teacher Login Page\n\n");
     printf("\t\t\t   ***********************************************************\n");

     printf("\t\t\t*******************************");
    printf("**********************************\n\n");

    FILE *acnt;

    fflush(stdin);
    printf("\t\tEnter your Username:\n\t\t");
    fgets(account.userid, MAXUSERNAMECAR, stdin);
    printf("\n\t\tEnter Password:\n\t\t");
    fgets(account.password, MAXPASSWORDCAR, stdin);


    acnt = fopen("registrationstudent.bin", "r");
     while(fread(&fileaccount, sizeof(info), 1, acnt))
    {
        if(strncmp(fileaccount.userid, account.userid, MAXUSERNAMECAR)==0 && strncmp(fileaccount.password, account.password, MAXPASSWORDCAR)==0)
        {
            printf("\n\t\t\t You Have Successfully Logged In\n\n");
            printf("\t\tPress any key......\n\n");
            accountfound=123;
            getch();
            nxt();
            break;
        }
}
if(accountfound==0)
{
    printf("\n\n\tLogin not Succesful\n");
    printf("\tLooks like you haven't registered yet\n");
    printf("\n\tPress any key to go to the registration page\n");
     fclose(acnt);
    getch();
    regist();

}
    /*fclose(acnt);
    getch();
    registr();*/



}




void teacher()
//void teacher
{
    system("cls");
    system("COLOR 30");
    printf("\n\n\t\t\t*******************************");
    printf("**********************************\n");
    printf("\t\t\t   ***********************************************************\n\n");
    printf("\t\t\t     ----------------------------------------");
    printf("------------\n");
    printf("\t\t\t\t    ^-^ ^-^ ^-^****E-LEARN****^-^ ^-^ ^-^\n");
    printf("\t\t\t\t    --------------------------------------\n\n");
    printf("\t\t\t\t\t   #######################\n\n");
    printf("\t\t\t\t\t           TEACHER\n\n");
     printf("\t\t\t   ***********************************************************\n");

     printf("\t\t\t*******************************");
    printf("**********************************\n\n");
   printf("\t\t\t\t\t\t1.LOGIN\n\n\t\t\t\t\t  2.Create New Account\n\n\n\t\t\t\t\t\tCHOOSE: ");

int chtch1;
scanf("%d", &chtch1);
switch(chtch1)
    {
    case 1:
        {
            logintch();
            break;
        }
    case 2:
        {
            regitch();
            break;
        }
    default:
        {
             printf("\n\n\t\t\t\tInvalid Option. Please try again\n\n");
                getch();
                main();
                break;
        }
    }



    getch();
}





void main()
{
    system("cls");
    system("COLOR 60");
    printf("\n\n\t\t\t*******************************");
    printf("**********************************\n");
    printf("\t\t\t   ***********************************************************\n\n");
    printf("\t\t\t     ----------------------------------------");
    printf("------------\n");
    printf("\t\t\t\t****Welcome To DIU Blended Learning Center****\n");
    printf("\t\t\t\t    --------------------------------------\n\n");
    printf("\t\t\t\t\t   #######################\n\n");
    printf("\t\t\t\t\t     Choose your Option:\n\n");
     printf("\t\t\t   ***********************************************************\n");

     printf("\t\t\t*******************************");
    printf("**********************************\n\n");
   printf("\t\t\t\t\t\t1.Teacher\n\n\t\t\t\t\t\t2.Student\n\n\n\t\t\t\t\t\tCHOOSE: ");

int chst1;
scanf("%d", &chst1);
switch(chst1)
    {
    case 1:
        {
            teacher();
            break;
        }
    case 2:
        {
            student();
            break;
        }
    default:
        {
             printf("\n\n\t\t\t\tInvalid Option. Please try again\n\n");
                getch();
                main();
                break;
        }
    }



    getch();
}

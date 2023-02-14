#include<stdio.h>

typedef struct login{
    char fname[50];
    char lname[50];
    char username[50];
    char password[50];
}login;


void registe(){
    system("CLS");
    FILE *log;

    login id ;
    login L;
    printf("\nEnter first name: ");
    scanf("%s",id.fname);
    printf("Enter last name: ");
    scanf("%s",id.lname);
    printf("Enter user name: ");
    scanf("%s",id.username);
    printf("Enter password: ");
    scanf("%s",id.password);

    log = fopen("login1.txt","a+");

    while(fread(&L,sizeof(login),1,log))
    {
        if(strcmp(id.username,L.username,50)==0)
        {
            printf("Please enter different user name\n");
            getch();
            registe();
            break;
        }
    }
    fwrite(&id,sizeof(login),1,log);

    fclose(log);

    printf("\n\n Your user name is your userid\n");
    printf("Now log in with user id and password\n");
    printf("Press any key to continue......");
    getch();
    system("CLS");
    logins();
}
void logins()
{
    system("CLS");
    char username[50];
    char password[50];
    FILE *log;
    log = fopen("Login1.txt","r");
    login L;
    printf("\nUser ID: ");
    scanf("%s",&username);
    printf("Password: ");
    scanf("%s",&password);
    int t=0;
    while(fread(&L,sizeof(login),1,log))
    {
        if(strcmp(username,L.username)==0 && strcmp(password,L.password)==0)
        {

            printf("Successfully logged in\n");


            t=1;
            break;

        }

    }
    fclose(log);
    if(t!=1)
    {

        printf("Please enter correct user id and password\n");
        getch();
        logins();
    }
}
void main()
{
    int choice;
    printf("\t\tA program using Structure,File,Pointer\n\n\n");
    printf("##To access a certain program you must have a User ID there.\n");
    printf("This Program will give u the ability to do so.\n");
    printf("\n>>If You are new here then, Press '1' for Registration\n");
    printf(">>If you have an ID, Press '2' for Log in\n");
    printf("\t Let's Go & Press - ");


    scanf("%d",&choice);
    if(choice==1)
    {
        system("CLS");
        registe();
    }

    else
    {
        system("CLS");
        logins();
    }
}

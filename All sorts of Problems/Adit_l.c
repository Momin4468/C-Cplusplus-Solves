#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>


struct registration
{
    char uname[30];
    char pass[25];
    char mobile[30];

} cus[100],cust[100];

int manager_login();

int manager_registration(void)
{
    system("color A");
    printf("\n\n\n\t\t\t\t");
    printf("\t\t\tFor Registration: Enter Your[User Name,Password,Mobile Number]\n");
    int i, rem=0, optioon;
    FILE *fp1,*fp2;
    fp2=fopen("C:\\pnumber.bin","rb+");
    if (fp2==NULL)
    {
        fp2 = fopen("C:\\pnumber.bin","wb+");
        fwrite(&rem, sizeof(rem), 1, fp2);
        fclose(fp2);
    }
    fread(&rem, sizeof(rem), 1, fp2);
    fclose(fp2);

    fp1 = fopen("C:\\regis.bin","rb+");
    if (fp1==NULL)
    {
        fp1 = fopen("C:\\regis.bin","wb+");
        fclose(fp1);
    }
    fread(&cus, sizeof(cus), 1, fp1);
    fclose(fp1);
    fflush(stdin);
    for(i=rem; i<rem+1; ++i)

    {

        printf("\n\t\t\t\t\t\t\t\t\tUser Name: ");
        fgets(cus[i].uname, 30, stdin);
        printf("\n\t\t\t\t\t\t\t\t\tPassword: ");
        fgets(cus[i].pass, 30, stdin);
        printf("\n\t\t\t\t\t\t\t\t\tMobile Number: ");
        fgets(cus[i].mobile, 30, stdin);

    }

    fp1 = fopen("C:\\regis.bin","wb+");
    fwrite(&cus, sizeof(cus), 1, fp1);
    fclose(fp1);
    fp2 = fopen("C:\\pnumber.bin","wb+");
    ++rem;
    fwrite(&rem, sizeof(rem), 1, fp2);
    fclose(fp2);
    printf("\n\n\t\t\t\t\t\t\t\tYour are successfully Registered\n\n");
    printf("\t\t\t\t\t\t\t\tThanks For Your Registration\n\n");
    printf("\t\t\t\t\t\t\t\tPress 1 for Login\n\n");
    printf("\t\t\t\t\t\t\t\tPress 2 for Again Registration\n\n");
    int choice;
    printf("\t\t\t\t\t\t\t\tEnter You choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        manager_login();
    }
    else if(choice==2)
    {
        manager_registration();
    }
    else
    {
        printf("\n\n\n\t\tWrong Entry\n\n\n\t\t");
        system("pause");
    }
}
int manager_login()

{
    printf("\n\n\t\t\t\t\t-------------------------------------MANAGER LOGIN PAGE---------------------------------------\n\n");
    printf("\n\t\t\t\t\t\t\t\tFor Login Enter User Name & Password\n\n");
    int i, rem=0, optioon=0;
    char ch;
    FILE *fp1,*fp2;
    fflush(stdin);
    char uname1[30];
    char passl[30];
    printf("\t\t\t\t\t\t\t\tUser Name: ");
    fgets(uname1, 30, stdin);
    fflush(stdin);

    printf("\n\t\t\t\t\t\t\t\tPassword: ");
    fgets(passl, 30, stdin);
    fp1 = fopen("C:\\regis.bin","rb+");
    fread(&cust, sizeof(cust), 1, fp1);
    fclose(fp1);
    for(i=0; i<100; ++i)
    {
        if ((0==strcmp(uname1,cust[i].uname)) && (0==strcmp(passl,cust[i].pass)))
        {
            printf("\n\n\t\tLogin Successfully\n");
            printf("\n");
            i=100;
            optioon=1;
            system("PAUSE");
            system("cls");

        }

    }
    if(optioon==1)
    {

    }
    else
    {

        printf("\n\n\t\t\t\t\t\t\tWrong User Name or Password\n\n\n\n\t\t");
        printf("\t\t\t\t\t");
        system("pause");
        printf("\n\n\n\n\t\t\t");
        printf("\t\t\t\tPress 1 for Log in Again\n\n\t\t\t");
        printf("\t\t\t\tPress 2 for Registration\n\n\t\t\t");
        printf("\t\t\t\tEnter Your Choice: ");
        fflush(stdin);
        int choice;
        scanf("%d",&choice);
        if(choice==1)
        {
            manager_login();
        }
        else if(choice==2)
        {
            manager_registration();
        }
        else
        {
            printf("\n\n\n\t\tWrong Entry\n\n\n\t\t");
            system("pause");
        }
    }
    return 0;
}

int main()
{
    int t;
    while(1){
       scanf("%d", &t);

        if(t==1) manager_login();

       else if(t==2) manager_registration();

        else if(t==0) break;

         else{

         }
        return 0;

    }


}

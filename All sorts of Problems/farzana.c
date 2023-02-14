#include<stdio.h>
struct
{
    char name[20];
    int age;
    int contact;
}people;


void A()
{
    FILE *file;
    file=fopen("people.text","a");

    if(file==NULL)
    {
        printf("file does not exist");
    }

    else{

        int i,num;
        printf("file opend\n");
        printf("enter number of people\n");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            printf("enter name:");
            scanf("%s",&people.name);
            printf("enter age:");
            scanf("%d",&people.age);
            printf("enter phone number:");
            scanf("%d",&people.contact);
            fprintf(file,"%s\t\t\t%d\t\t%d\n",people.name,people.age,people.contact);
        }
        fclose(file);
    }
}

int main (){

   A();

}

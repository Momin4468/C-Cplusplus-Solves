#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char a[50]="ICT world";
    char b[50]="ict carnival";
    char c[50], ch;
    strcpy(c,a);
    for(i=0;i<3;i++)
    {
        if(b[i]==c[i])
        {
            j++;
        }
    }
    if(j==3)
    {
        printf("your course are added\n");
    }
    else
    {
        printf("try again\n");
    }
}

#include<stdio.h>
int main()
{
    struct Person{
     char a[50],b[50];
     char c[50];
    }p[10];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%s %s %s",&p[i].a,&p[i].c,&p[i].b);
    }
    printf("Name\tPhone Number\tE-mail Address\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t%s\t%s\n",p[i].a, p[i].c, p[i].b);
    }

}

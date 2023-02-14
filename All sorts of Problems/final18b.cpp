#include<stdio.h>
#include<string.h>
int A()
{
    int a,b,c,d,e;
    printf("Enter five numbers:\n");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    //f=a*b*c*d*e;
    //printf("result = %d",f);
    return(a*b*c*d*e);
}
int B()
{
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    char e[50];
    printf("Enter the course title of SE 121:\n");
    gets(a);
    gets(a);
    printf("Enter the course title of SE 122:\n");

    gets(b);
    printf("Enter the course title of SE 123:\n");
    gets(c);
    printf("Enter the course title of MAT 101:\n");
    gets(d);
    printf("Enter the course title of PHY 101:\n");
    gets(e);
    printf("Your registered courses for this semester are:\n");
    puts(a);
    puts(b);
    puts(c);
    puts(d);
    puts(e);
}
int main()
{
   int f;
   f= A();
    printf("result = %d",f);
    B();
    return 0;
}

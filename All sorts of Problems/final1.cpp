#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char a[100],b[100];
    printf("Your first name\n");
    gets(a);
    printf("Your Last Name\n");
    gets(b);
    strcat(a,b);
    printf("%s\n",a);
    len = strlen(a);
    printf("the length %d\n",len);
    return 0;

}

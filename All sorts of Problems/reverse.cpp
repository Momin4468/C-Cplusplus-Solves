/*#include<stdio.h>
#include<string.h>
int main()
{
    char m[100];
    gets(m);
    puts(strrev(m));
    return 0;
}*/
#include<stdio.h>
int main()
{
    int n, r=0;
    scanf("%d",&n);
    while(n!=0){
            r=r*10;
            r=r+n%10;
            n=n/10;
          }
          printf("%d", r);
          return 0;
}

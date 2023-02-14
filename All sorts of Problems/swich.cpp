#include<stdio.h>
int main()
{
    int a,b,n,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("1.add\n2.sub\n3.multi\n4.div\n5.mod\n");
    printf("enter an operator : ");
    scanf("%d",n);
    switch(n)
    {
        case '1' : c=a+b;
        break;
        case '2' : c=a-b;
        break;
        case '3' : c=a*b;
        break;
        case '4' : c=a/b;
        break;
        case '5': c=a%b;
        break;
        default :
            printf("Your choice is not correct\n");
            break;
    }
    printf("%d",c);
    return 0;
}

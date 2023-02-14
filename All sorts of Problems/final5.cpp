#include<stdio.h>
#include<string.h>
int A()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even.\n",a);
    }
    else{
        printf("%d is odd.\n",a);
    }
}
int B()
{
    char b[50];
     gets(b);
     puts(b);

}
int main()
{
    int i,n;
    printf("The result from first function\n");
    A();
    printf("Courses in current semester.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    B();
    }
    return 0;
}

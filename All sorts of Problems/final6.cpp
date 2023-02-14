#include<stdio.h>;
int main()
{
int a, i, b;
scanf("%d,%d", &a, &b);
char p='m';
i=a;
while (i>=0)
{
printf("%c\n", p);
i=i-2;
}
if(b==1)
printf("One");
else if(b==2)
printf("Two");
else
printf("Wrong input");
return 0;
}

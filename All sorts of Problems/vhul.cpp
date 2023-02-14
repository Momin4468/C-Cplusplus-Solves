#include<stdio.h>
int main()
{
int a, i, b;
scanf("%d,%d", &a, &b);
for (i=a; i>=0; i=i-2)
{
printf("%c\n",a );
}
  if (b==1)
{
printf("One");
}
  else if (b==2)
{
printf("Two");
}
  else
{
printf("Wrong input");
}
return 0;
}

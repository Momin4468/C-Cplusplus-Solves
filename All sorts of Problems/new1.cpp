#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("mark is %d\n",a);
    if(a>80)
    {
        printf("Honous\n");
    }
    else if(a>60){
        printf("First division\n");
    }
    else if(a>50)
    {
        printf("Second Division\n");
    }
    else if(a>40)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Fail\n");
    }
 return 0;
}


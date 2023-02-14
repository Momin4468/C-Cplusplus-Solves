#include<stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d",x);
    switch(x/10)
    {
    case 3 :
    case 4 :
    case 5 :
        y=x*5.00;
        printf("%.2f taka",y);
        break ;
    case 6 :
    case 7 :
        y=x*3.50;
        break;
    case 8 :
    case 9 :
        y=x*3.00;
        break;
    default :
        y=x*2.00;
        break;
    }
    printf("%.2f taka",y);


    return 0;
}

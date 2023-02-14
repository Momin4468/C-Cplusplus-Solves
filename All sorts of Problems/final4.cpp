#include<stdio.h>
int main()
{
    int P[10]={23,-46,3,567,234,564,7785,-56,0,2};
    int i,j=0,k=0,Max,Min;
    Max=P[0];
    for(i=1;i<10;i++)
    {
        if(Max<P[i])
        {
            Max=P[i];
            j=i;
        }
    }
    Min=P[0];
    for(i=1;i<10;i++)
    {
        if(Min>P[i])
        {
            Min=P[i];
            j=i;
        }
    }
    printf("The maximum is %d\nThe minimum is %d \n",Max,Min);
    return 0;
}

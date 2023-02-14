#include <stdio.h>
int main()
{
    int low=0, high=8000,K=0,y=0,arr[1010],flag,i,n2=7;

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
       if(flag == 0){
                arr[y]=low;
                y++;
       }

        ++low;

    }

    for(y=0;y<1009;y++){
      printf("  %d   ",arr[y]);
    }

    int next;

    for(y=0;y<1009;y++){
     if(n2==arr[y]){
           next = arr[y+1];
           break;
       }
    }
    printf("\n\n%d",next);
    return 0;
}

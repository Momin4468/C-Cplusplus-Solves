#include<stdio.h>
#include<math.h>
#include<windows.h>

int main ()
{
      int a,b,c,d,n,i;
      int sq;
      while(1){
            n = 0;

         scanf("%d%d",&a,&b);
        if(a==0&&b==0) break;

        for(i=a;i<=b;i++){
            sq = sqrt(i);
            if(sq - (int)sq == 0) n++;
        }
        printf("%d\n\a",sq);
       // printf("\a");
     }
    return 0;
}


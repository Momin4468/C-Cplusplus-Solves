#include<stdio.h>
int main()
{

    int t,i,no,k,a[1001],sum,avrg,cnt;
    float rslt;
    scanf("%d", &t);
    for(k=1;k<=t;k++){
        scanf("%d", &no);
        sum = 0;
        for(i=0;i<no;i++){
            scanf("%d", &a[i]);
            sum = sum + a[i];
        }
        avrg = sum/no;
        cnt = 0;
        for(i=0;i<no;i++){
            if(avrg<a[i]) cnt++;
        }
        rslt = (cnt*100.0)/no;
        printf("%.3f%c\n",rslt,'%');
    }
   return 0;
}

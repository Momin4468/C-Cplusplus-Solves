#include<stdio.h>
int main()
{
    int sum,b,a,cnt,i,j;
    float e,f;
    char s = '%';
    scanf("%lld",&a);
    for(i=1;i<=a;i++){
            scanf("%d",&b);
            long long int c[b];
            sum = 0;cnt =0;
        for(j=0;j<b;j++){
                scanf("%d",&c[j]);
                sum = sum+c[j];
        }
        e = sum/(b*1.0);
        for(j=0;j<b;j++){
                if(c[j]>e) cnt++;
        }
        f = (cnt*100.00)/b;
        printf("%.3f%c\n",f,s);
    }
    return 0;
}

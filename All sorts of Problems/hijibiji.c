#include<stdio.h>
int main()
{

    int t,k,n,p,q,i,a[11],s,e;
    scanf("%d", &t);

    for(k=1;k<=t;k++){
        scanf("%d", &n);
        e = 0;

        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }

        for(i=0;i<n-1;i++){
            if(a[i]!=a[i+1] && (a[i]-a[i+1])<=5){
               e++;
            }
        }
        if(e==0 && a[i]!=2) e = 1;
        printf("Case %d: %d\n",k,e);
    }
    return 0;
}

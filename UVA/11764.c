#include<stdio.h>

int main()
{
    int i,j,n,k,h,l,a[100];
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        h=0; l=0;
        scanf("%d", &k);

        for(j=0;j<k;j++){
           scanf("%d", &a[j]);
        }

        for(j=0;j<k-1;j++){
            if(a[j]<a[j+1]) h++;
            else if(a[j]>a[j+1]) l++;
        }
         printf("Case %d: %d %d\n",i,h,l);
    }
    return 0;
}

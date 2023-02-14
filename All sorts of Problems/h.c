#include<stdio.h>
int main()
{
    int n,k,a[100],j=0,i,h;

    scanf("%d %d", &n,&k);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }


    for(i=0;i<n;i++){
        if(a[i]>0 && a[i]>=a[k-1]) j++;
    }
    printf("%d\n",j);
    return 0;
}

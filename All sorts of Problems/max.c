#include<stdio.h>
int main()
{
    int a[100],n,max,t,j,i;

    scanf("%d", &t);
    for(j=1;j<=t;j++){
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(i=1;i<n;i++){
      if(max<a[i]){
        max = a[i];
      }
    }

    printf("Case %d: %d\n",j,max);
    }
   return 0;
}

#include<stdio.h>

int main()
{
    int i,n,a[3],k,j,m;
    scanf("%d", &n);

    for(m=1; m<=n; m++){

        for(j=0;j<3;j++){
        scanf("%d", &a[j]);
        }

        for(i=0;i<3;i++){
            for(j=i+1;j<3;j++){
                if (a[i] < a[j])
                {
                    k =  a[i];
                    a[i] = a[j];
                    a[j] = k;
                }
            }
        }
         printf("Case %d: %d\n",m,a[1]);
    }
    return 0;
}

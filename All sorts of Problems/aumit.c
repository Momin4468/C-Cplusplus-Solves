#include<stdio.h>


int main()
{

    int i,t,b,c,a[500],p,stick[400],r[400],j,n,temp,k,area;


    scanf("%d", &t);
    for(k=1;k<=t;k++){
        scanf("%d", &n);
        for(j=0;j<(4*n);j++){
            scanf("%d", &a[j]);
        }

        for(i=0;i<(4*n)-1;i++){
            for(j=0;j<((4*n)-i-1);j++){
                if(a[i]<a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("\n%d %d", a[0], a[(4*n)-1] );
        printf("%d\n",area);

    }
    return 0;
}


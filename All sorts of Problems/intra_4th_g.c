#include<stdio.h>
int main()
{
    int a,b[11],c[1005],n,e=0,i,j,cnt;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &c[i]);
    }

    for(i=0;i<10;i++){
         j = 0; cnt = 0;
        while(j<n){
            if(i==c[j]){
                cnt++;
            }
            else{
                if(e<cnt) e = cnt;
                cnt = 1;
            }
            j++;
        }
        b[i] = e;
    }

    int m = b[0];
    for(i=1;i<10;i++){
        if(m<b[i]) m = b[i];
    }

    printf("%d\n",m);
    return 0;
}

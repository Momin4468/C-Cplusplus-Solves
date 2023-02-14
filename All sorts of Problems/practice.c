#include<stdio.h>
int main()
{

    int n,x,t;
    scanf("%d", &t);

    for(int i=0;i<t;i++){
        scanf("%d", &n);
        x = -n * n;
        for(int  j=1;j<3*n+1;j++){
            printf("%d ", x);
            x = (x + (2*j) -1);
        }
        printf("\n\n");
    }

}

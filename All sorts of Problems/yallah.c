#include<stdio.h>
int main()
{
    int b,a,e,cnt=0,i,j,k;
    scanf("%d %d",&a,&b);
    if(b==1){
        printf("1\n");
        return 0;
    }
    else if(b>a){
        i = 10;
        k = a;
        while(1){
         i = i*i;
           if(i>k) break;
           if(i==b){
            printf("1\n");
            return 0;
           }
           else if(i>b){
            break;
           }
        }
        printf("0\n");
        return 0;
    }
    int c[a+2][a+2];
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
                c[i-1][j-1] = i*j;
        }
    }

    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
                if((c[i-1][j-1])== b) cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}

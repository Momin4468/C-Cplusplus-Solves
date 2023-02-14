#include<stdio.h>
int main()
{
    int i,t,m,n,res,x,mn;

    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%d %d", &m, &n);
        mn = m*n;
        if (m==1 || n==1) res = m*n;
        else if (m==2 || n==2){
            if(n==2) x = m;
            else x = n;

                if(x%4==1) res = x+1;
                else if(x%4==2) res = x+2;
                else if(x%4==3) res = x+1;
                else if(x%4==0) res = x;
            }
        else if (mn%2==0) res = (mn)/2;
        else res = (mn/2)+1;

        printf("Case %d: %d\n",i,res);
    }
    return 0;
}


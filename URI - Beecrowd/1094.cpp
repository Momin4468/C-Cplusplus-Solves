#include<stdio.h>
int main()
{
    int a,i,n,sum=0,C=0,R=0,S=0;
    float c,r,s;
    char type,b='%';

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %c", &a, &type);
        sum = sum + a;
        if(type=='C')
        {
            C=C+a;
        }
        else if(type=='R')
        {
            R=R+a;
        }
        else if(type=='S')
        {
            S=S+a;
        }
    }
    c=(C*100.0)/sum;
    r=(R*100.0)/sum;
    s=(S*100.0)/sum;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %c\n",c,b);
    printf("Percentual de ratos: %.2f %c\n",r,b);
    printf("Percentual de sapos: %.2f %c\n",s,b);
   return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    int i, t;
    long long int n, p;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%lld", &n);
        p=sqrt(n);
        if(p*p==n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

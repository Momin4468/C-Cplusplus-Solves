#include<stdio.h>

int A()
{
    int i,j,n,k;
    scanf("%d", &n);
    k = n;
    for(i=1; i<=n; i++){

        for(j=1;j<=n-i;j++){
            printf(" ");
        }

        for(j=1;j<=i;j++){
            printf("#");
        }
      printf("\n");
    }
    return 0;
}

int main()
{
   A();

}

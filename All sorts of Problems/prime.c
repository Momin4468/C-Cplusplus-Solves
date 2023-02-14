#include <stdio.h>
#include <stdlib.h>

void main()
{
    int  flag;

     int n1,n2[1000],i,a,j,U;
    printf("Amount of numbers-> ");
    scanf("%d", &n1);

    printf("\n\n\tEnter %d numbers by a sequence -> ", n1);
    for( i = 0; i<n1; i++){
        scanf("%d", &n2[i]);
    }

    flag = 0;

   for(i=0;i<n1;i++){

    U = n2[i];
    printf("\nNumber = %d\n",U);
    for (j = 2; j < U; j++)
    {
        if(U<=2){
            flag = 0;
            break;
        }
        if ((U % j) == 0)
        {
            printf("\n\nThe number U is divided by %d\n\n",j);
            flag = 1;
            break;
        }
    }
   }
    if (flag == 0) printf("it is a prime number series\n");
     else printf("it is not a prime number series\n");
}

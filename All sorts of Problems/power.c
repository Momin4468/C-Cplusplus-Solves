#include <stdio.h>
#include <math.h>

int main()
{
    int  temp;


    int n1,n2[1000],i,a,j;
    printf("Amount of numbers-> ");
    scanf("%d", &n1);

    printf("\n\n\tEnter %d numbers by a sequence -> ", n1);
    for( i = 0; i<n1; i++){
        scanf("%d", &n2[i]);
    }
    int temp,J;
    temp = sqrt(n2[0]);
     J = temp;

     for( i = 0; i<n1; i++){
        flag = 0;
   temp = sqrt(n2[i]);

    if(temp*temp == n2[i]&&temp==J){
        flag=1;
        J++;
    }
    else {
        flag = 0;
        break;
    }
  }
  if(flag == 1) printf("\nIt is a series of numbers by power of two.\n");
  else printf("\nIt is not a series of numbers by power of two.\n");



    return 0;
}

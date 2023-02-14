#include <stdio.h>

int main()
{
   int n1,n2[1000],i,a,j;
    printf("Amount of numbers-> ");
    scanf("%d", &n1);

    printf("\n\n\tEnter %d numbers by a sequence -> ", n1);
    for( i = 0; i<n1; i++){
        scanf("%d", &n2[i]);
    }
    int flag;
   //condition to check whether number is power of two or not
   //performing bitwise operation
  for( i = 0; i<n1; i++){
        flag = 0;
   if((n2[i] != 0) && ((n2[i] &(n2[i] - 1)) == 0))
      flag = 1;
  }
  if(flag == 1) printf("\nIt is a series of numbers by power of two.\n");
  else printf("\nIt is not a series of numbers by power of two.\n");

 return 0;
}

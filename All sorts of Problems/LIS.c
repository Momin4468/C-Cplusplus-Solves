#include<stdio.h>
int main()
{
  int i,j,l,m,num,ar[100],value = 1,val[100][100];

  printf("\nEnter number of elements you want to input: ");
  scanf("%d", &num);

  printf("\nEnter elements: ");
  for(i=0;i<num;i++){
    scanf("%d", &ar[i]);
  }


  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
        val[i][j] = value;
    }
  }


  printf("\n\n");
  for(i=0;i<num;i++){
    printf("%d  ", ar[i]);
  }
  printf("\n");

  for(i=0;i<num;i++){
    printf("-  ", ar[i]);
  }
  printf("\n");

  int k =1,diagonal;
  for(i=0;i<num;i++){
    for(j=k;j<num;j++){
        if(ar[i]>ar[j]){
            k++;
            break;
        }
        else{
            diagonal = val[i][j]+1;
            //printf("diagonal %d\n",diagonal);
            if(val[i+1][j]<diagonal){
                val[i+1][j] = diagonal;
            }
            k++;
        }
    }
  }



//printing  1.....

    for(i=num;i>0;i--)
    {
        for(j=0;j<num-i;j++){
            printf("   ");
        }

        for(j=0; j<i; j++)
        {
            printf("%d  ",val[i-1][j]);
        }

      printf("\n");
   }

}

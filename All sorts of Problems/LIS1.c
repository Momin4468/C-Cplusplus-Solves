#include<stdio.h>
int main()
{
  int i,j,k,l,m,num,ar[100],value = 1,val[100][100];

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


  printf("\n");
  for(i=0;i<num;i++){
    printf("%d  " ,ar[i]);
  }
  printf("\n");
  for(i=0;i<num;i++){
    printf("-  ");
  }
  printf("\n");


  printf("Table before comparing: \n");
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

   int p,h,w,temp;
   for(i=1;i<num;i++){
        p=0;h=0,temp=1;
    for(j=0;j<i;j++){
        if(ar[i]>ar[j]){
            printf("\ni = %d  j = %d p = %d,h = %d, temp = %d, value = %d\n",i,j,p,h,temp,val[p+1][h+1]);
            //temp = val[p+1][k+1];
            w = val[j][j]+1;
            //p++;h++;
            if(temp<w) {
               val[i][i] = w;
               temp = val[i][i];
            }
            printf("\ni = %d j =%d  p = %d,h = %d, temp = %d, value = %d\n",i,j,p,h,temp,val[i][i]);
            //p++;h++;
        }
        p++;h++;
    }
  }


   printf("Table after comparing: \n");
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


    printf("\n\n");
}

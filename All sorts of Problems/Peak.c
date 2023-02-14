#include<stdio.h>
int main()
{
    int a[100],n,peak=-1,pos=-1,i,temp,temp1;

    printf("Enter array size: \n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n-1;i++){
      temp = peak;
      temp1 = pos;
      if(a[i]>a[i-1] && a[i]>a[i+1]){
        peak = a[i];
        pos = i;
      }
      else if(a[0]>a[1]){
        peak = a[0];
        pos = 0;
      }
      else if(a[n-1]>a[n-2]){
        peak = a[n-1];
        pos = n-1;
      }

      if(temp>peak) {
        peak = temp;
        pos = temp1;
      }

    }

    printf("The Peak value is found at position %d which is: %d\n",pos+1,peak);

}

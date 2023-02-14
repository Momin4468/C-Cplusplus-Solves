#include<stdio.h>
int main()
{
 int A_length;
 int i, A[100],peak=0,peak_f=0,peak_l=0;

 printf("\nEnter Array Length: ");
 scanf("%d",&A_length);

 printf("\n\nEnter %d elements of array: ",A_length);
 for(i=0;i<=A_length-1;i++)
 {
     scanf("%d",&A[i]);
 }

  if(A[0]>A[1]) peak_f=A[0];
  if(A[A_length-1]>A[A_length-2]) peak_l=A[A_length-1];

 for(i=1;i<A_length-1;i++)
 {
  if(A[i]>A[i-1]&&A[i]>A[i+1]) peak=A[i];
 }


 if (peak_f != 0 && peak_l !=0 ){
   printf("\nfist peak is %d\n",peak_f);
   printf("Peak is %d\n",peak);
   printf("Last peak is %d\n", peak_l);
 }
 else if (peak_f == 0 && peak_l == 0 ){
    printf("There is no first peak.\n");
    printf("Peak is %d\n",peak);
    printf("There is no last peak.\n");
 }
 else if (peak_f == 0 && peak_l !=0 ){
    printf("There is no first peak.\n");
    printf("Peak is %d\n",peak);
    printf("Last peak is %d\n", peak_l);
 }
  else if (peak_f != 0 && peak_l ==0 ){
    printf("First peak is %d\n", peak_f);
    printf("Peak is %d\n",peak);
    printf("There is no last peak.\n");
 }


 return 0;
}

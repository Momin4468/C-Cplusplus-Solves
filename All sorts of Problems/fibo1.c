#include<stdio.h>
#include<conio.h>

void main()
{
    int a=0,b=1,sum,j,k=0;

     for( i = 0; i<n1; i++){

    for(j=2;j<n1;j++)
    {
        sum = a+b;
        a = b;
        b = sum;
        if(sum==n2[i]){
            k++;
            break
        }

       }
    }
    if(k==n1)  printf("\n\n\t\t\t  IT IS FEBONNACI NUMBER. ");
    else     printf("\n\n\t\t\t  IT IS NOT FEBONNACI NUMBER. ");

    getch();
 }


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<windows.h>

int main()
{
    system("color 7C");
    printf("\t\tWelcome to my project\n");
    printf("\n This project is about to find the next number in the given series.\n\n\n");

    printf("Now here this program will function for three types of series only.\n");
    printf("You can give numbers as per the fibonacci sequence, power of 2 sequence, binomial series.\n");
    printf("If you don't give any of the above sequence then the program will give you null value.\n");

    getch();
    system("CLS");
    system("color 1F");
    printf("Enter the numbers of the series in any of the three sequences.\n");
    printf("But first tell me, how many numbers you want to give.\n");

    int n1,n2[1000],i,a,j;
    printf("Amount of numbers-> ");
    scanf("%d", &n1);

    printf("\n\n\tEnter %d numbers by a sequence -> ", n1);
    for( i = 0; i<n1; i++){
        scanf("%d", &n2[i]);
    }


    for (i = 0; i < n1; ++i)
        {

            for (j = i + 1; j < n1; ++j)
            {

                if (n2[i] > n2[j])
                {

                    a =  n2[i];
                    n2[i] = n2[j];
                    n2[j] = a;

                }

            }

        }


    printf("\nNow let us see do the given series fall in any of the three sequence here.\n");


     int A=0,b=1,sum=0,k=0,fi[501],flag;


     fi[0]=0;
     fi[1] = 1;

     for(i=2;i<500;i++){
        sum = A+b;
        fi[i] = sum;
        A = b;
        b = sum;
     }

     for(i=0;i<500;i++){
        if(n2[0]==fi[i]){
            k = i;
            break;
        }
     }
     flag = 0;
     for(i=0;i<n1;i++){
        if(n2[i]!=fi[k]){
            flag =1;
            break;
        }
        k++;
     }




    int w,w1;
    if(flag==0){
         printf("\n\nIT IS FIBONNACI NUMBER Series.\n");
         w = 1;
    }
    else  {
         printf("\n\nIT IS NOT FIBONNACI NUMBER Series.\n");
         w1=4;
    }
   Sleep(1000);

   int X,Y;
   X = n2[1]-n2[0];
   flag = 0;
   for(i=0;i<n1-1;i++){

        Y = n2[i+1]-n2[i];
        if(X!=Y){
            flag = 1;
            break;
        }

   }
   if(flag == 0) {
      printf("It is a binomial series where difference between each numbers are %d\n",X);
      w=2;
   }
   else{
     printf("It is a not binomial series.\n");
      w1++;
   }
   Sleep(1000);


   int I,S=0,TW[34],V=2;

   for(i=0;i<33;i++){
    TW[i]= pow(V,i);
   }

    for(j=0;j<33;j++){
        if(n2[0]==TW[j]){
            S = j;
            break;
        }
    }


   flag = 0;
   for(i=0;i<n1;i++){
        if(n2[i]!=TW[S]){
            flag = 1;
            break;
        }
        S++;
   }

    if(flag == 0) {
      printf("It is a power of 2 series.\n");
      w=3;
   }
   else{
     printf("It is a not power of 2 series.\n\n");
      w1++;
   }
   Sleep(1000);

   int next=0;

     if(w==1) {
    printf("\n\n\t\t\t  IT IS FIBONNACI NUMBER Series.\n");
    next = n2[n1-2]+n2[n1-1];
    printf("So the next number of the series is: %d\n", next);
    return 0;
     }


     if(w==2) {
    printf("\n\n\t\t\t  IT IS A Binomial Number Series.\n");
    next = n2[n1-1] + X;
    printf("So the next number of the series is: %d\n", next);
    return 0;
     }


     if(w==3) {
    printf("\n\n\t\t\t  IT IS A Power of Two Number Series.\n");
    next = TW[S];
    printf("So the next number of the series is: %d\n", next);
    return 0;
     }

     if(w1==6) {
    printf("\n\n\t\t\t  IT IS NONE OF the Above Series.\n");
    printf("SO, WE Can't give any next number for this series.\n");
     }

     return 0;

}

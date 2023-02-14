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
    printf("You can give numbers as per the fibonacci sequence, prime numbers sequence, squire number series.\n");
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


     int A=0,b=1,sum,k=0;

     for( i = 0; i<n1; i++){

    for(j=2;j<n1;j++)
    {
        sum = A+b;
        A = b;
        b = sum;
        if(sum==n2[i]){
            k++;
            break;
        }

       }
    }
    int w,w1;
    if(k==n1){
         printf("\n\nIT IS FIBONNACI NUMBER Series.\n");
         w = 1;
    }
    else  {
         printf("\n\nIT IS NOT FIBONNACI NUMBER Series.\n");
         w1=4;
    }
   Sleep(1000);


        int flag;

    for(i=0;i<n1;i++){

     flag = 0;
      //  if(n2[i]<=1) i++;
    for (j = 2; j <= n2[i] / 2; j++)
    {
        if ((n2[i] % j) == 0)
        {
            flag = 1;
            break;
        }
    }
   }
    if(flag == 0){
         printf("It is a Prime number series\n");
         w = 2;
    }
     else{
        printf("It is not a Prime number series\n");
        w1 = 5;
     }
    Sleep(1000);


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
  if(flag == 1){
    printf("It is a series of squire numbers. \n");
    w= 3;
  }
  else {
        printf("It is not a series of squire numbers.\n");
        w1=6;
  }
  Sleep(1000);

   int next;

     if(w==1) {
    printf("\n\n\t\t\t  IT IS FIBONNACI NUMBER Series.\n");
    next = n2[n1-2]+n2[n1-1];
    printf("So the next number of the series is: %d\n", next);
    return 0;
     }

      if(w==2) {
    printf("\n\n\t\t\t  IT IS Prime NUMBER Series.\n");

    int low=0, high=8000,K=0,y=0,arr[1010];

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
       if(flag == 0){
                arr[y]=low;
                y++;
       }

        ++low;

    }

    int next;
    for(y=0;y<1009;y++){
     if(n2[n1-1]==arr[y]){
           next = arr[y+1];
           break;
       }
    }

    printf("So the next number of the series is: %d\n",next);
    return 0;

  }

      if(w==3) {
    printf("\n\n\t\t\t  IT IS A Squire  NUMBER Series.\n");

     int R=1,T=1000,S,arr1[1000],Y=0;


        for(i = R; i <= T; i++)
        {
            S = i*i;
            arr1[Y]=S;
            Y++;
        }

      for(i=0;i<1000;i++){
        if(n2[n1-1]==arr1[i]){
             next = arr1[i+1];
             break;
        }
      }

    printf("So the next number of the series is: %d\n",next);
    return 0;

  }

      if(w1==4||w1==5||w1==6) {
    printf("\n\n\t\t\t  IT IS NONE OF the Series.\n");
    printf("WE Can't give any next number for this series.\n");
     }

  return 0;
}

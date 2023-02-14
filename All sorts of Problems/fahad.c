#include<stdio.h>

#include<math.h>
#include<windows.h>

int main(){


printf("\tWelcome to my project.\n");
printf("\nThis project is about converting different units into one another.\n\n\n");


double T,C;
int A,flag = 0;


while(1){

    printf("Press 1 for Fahrenheit To Celsius Conversion.\n");
    printf("Press 2 for Celsius To Fahrenheit Conversion.\n");
    printf("Press 3 for Meter to Kilometer conversion.\n");
    printf("Press 4 for Kilometer to Meter Conversion.\n");
    printf("Press 5 for Kilometer to Mile Conversion.\n");
    printf("Press 6 for Kilogram to Pound Conversion.\n");
    printf("Press 0 for exit.\n\n");


    printf("Choose A Number -> ");


    scanf("%d",&A);

    switch(A){

       case 1: {
           printf("Enter the temperature in Fahrenheit scale: ");
           scanf("%lf", &T);
           C = (T-32)*(5/9);
           printf("The temperature in Celsius Scale: %.2lf Celsius\n",C);
           break;
         }
        case 2: {
           printf("Enter the temperature in Celsius scale: ");
           scanf("%lf", &T);
           C = (T*(5/9))+32;
           printf("The temperature in Fahrenheit Scale: %.2lf Fahrenheit\n",C);
           break;
         }
        case 3: {
           printf("Enter the length in Meter scale: ");
           scanf("%lf", &T);
           C = T/1000;
           printf("The length in Kilometer scale: %.2lf Kilometer\n",C);
           break;
         }
         case 4: {
           printf("Enter the length in Kilometer scale: ");
           scanf("%lf", &T);
           C = T*1000;
           printf("The length in Meter scale: %.2lf Meter\n",C);
           break;
         }
         case 5: {
           printf("Enter the length in Kilometer scale: ");
           scanf("%lf", &T);
           C = T/1.609;
           printf("The length in Mile scale: %.2lf Mile\n",C);
           break;
         }
         case 6: {
           printf("Enter the mass in Kilogram scale: ");
           scanf("%lf", &T);
           C = T*2.205;
           printf("The mass in pound scale: %.0lf lbs\n",C);
           break;
         }
         case 0:{
            printf("\nExiting.....\n");
            flag = 1;
            break;
         }
         default:
            printf("\nPlease Choose a valid option or number.\n");
            break;
    }
    Sleep(2000);
    if(flag==1) break;

  }

    printf("\n\nThanks for running the program.\n");
    printf("Developed By Fahad.\n");
    return 0 ;

}


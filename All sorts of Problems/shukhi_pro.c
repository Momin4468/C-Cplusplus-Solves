#include<stdio.h>
int main() {
    int n;
    float temp1,temp2;

    printf("\n\n\t #### Welcome to my project ####\n");
    printf("\n My project is about temperature conversation system.\n");

    while(1){
       printf("\nEnter the option you want to convert\n");
       printf("1. Celsius    to  Kelvin\n");
       printf("2. kelvin     to  Celsius\n");
       printf("3. Fahrenheit to  Celsius\n");
       printf("4. Kelvin     to  Fahrenheit\n");
       printf("5. Fahrenheit to  Celsius\n");
       printf("6. Celsius    to  Fahrenheit\n");
       printf("7. Kelvin     to  Rankine\n");
       printf("8. Rankine    to  Kelvin\n");
       printf("Enter 0 to exit....\n");

       scanf("%d", &n);
       printf("\n");
       switch(n){
           case 0:
                  printf("\nThanks for using this system.\n");
                  printf("Developed by Sukhi.\n");
                  return 0;
                  break;
           case 1:
                  printf("Enter temperature in Celsius\n");
                  scanf("%f", &temp1);
                  temp2 = temp1+273;
                  printf("Temperature in Kelvin is: %.1f\n", temp2);
                  break;
           case 2:
                  printf("Enter temperature in Kelvin\n");
                  scanf("%f", &temp1);
                  temp2 =temp1-273;
                  printf("Temperature in Celsius is: %.1f\n", temp2);
                  break;
           case 3:
                  printf("Enter temperature in Fahrenheit\n");
                  scanf("%f", &temp1);
                  temp2 = (temp1+459.67)*(5/9);
                  printf("Temperature in Kelvin is: %.1f\n", temp2);
                  break;
           case 4:
                  printf("Enter temperature in Kelvin\n");
                  scanf("%f", &temp1);
                  temp2 =temp1*9/5-459.67;
                  printf("Temperature in Fahrenheit is: %.1f\n", temp2);
                  break;
           case 5:
                  printf("Enter temperature in Fahrenheit\n");
                  scanf("%f", &temp1);
                  temp2 =(temp1-32)*(5/9);
                  printf("Temperature in Celsius is: %.1f\n", temp2);
                  break;
           case 6:
                  printf("Enter temperature in Celsius\n");
                  scanf("%f", &temp1);
                  temp2 =temp1*9/5+32;
                  printf("Temperature in Fahrenheit is: %.1f\n", temp2);
                  break;
           case 7:
                  printf("Enter temperature in Kelvin\n");
                  scanf("%f", &temp1);
                  temp2 =temp1*5/9;
                  printf("Temperature in Rankine is: %.1f\n", temp2);
                  break;
           case 8:
                  printf("Enter temperature in Rankine\n");
                  scanf("%f", &temp1);
                  temp2 =  temp1*9/5;
                  printf("Temperature in Kelvin is: %.1f\n", temp2);
                  break;
            default:
                  printf("\nWrong choice!! please choose 1 to 8.\n");
                  break;

        }

        printf("\n\nDo you want use convertion again??\n");
        printf("If No then press 0,else press any number.\n");
        int flag;
        scanf("%d", &flag);
        if(flag==0){
                break;
        }
    }

     printf("\n\nThanks for using this system.\n");
     printf("Developed by Sukhi.\n");
     return 0;
}

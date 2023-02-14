#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159265
int add(int x, int y);
int sub(int x, int y);
int multi(int x, int y);
int divide(int x, int y);


int main(){

    int choice;
	float num1,num2,sum,sub1,multi1,divide1;
	float degree,power,x,y,i,n,t1,t2,t3,t4;
    int p= 1;

	printf("1 for Addition :\n");
	printf("2 for Subtraction :\n");
	printf("3 for Multiplication :\n");
	printf("4 for Divide :\n");
	printf("5 for Cos :\n");
	printf("6 for sin :\n");
	printf("7 for tan :\n");
	printf("8 for Log10:\n");
    printf("9 for Log2:\n");
    printf("10 for Square Root :\n");
    printf("11 for Power :\n");
    printf("12 for Exponential :\n");
    printf("13 for Arithmetic Equation.\n");

	scanf("%d",&choice);

	switch(choice){


			case 1:
			    printf("Enter two number from keyboard: ");
                scanf("%f %f",&num1,&num2);
				sum = add(num1,num2);
				printf("The sum of two number is= %f",sum);
				break;


            case 2:
                printf("Enter two number from keyboard: ");
                scanf("%f %f",&num1,&num2);
				sub1 = sub(num1,num2);
				printf("The sum of two number is= %f",sub1);
				break;


			case 3:
			    printf("Enter two number from keyboard: ");
                scanf("%f %f",&num1,&num2);
				multi1 = multi(num1,num2);
				printf("The multiplication of two number is= %f",multi1);
				break;


			case 4:
			    printf("Enter two number from keyboard: ");
                scanf("%f %f",&num1,&num2);
				divide1 = divide(num1,num2);
				printf("The divide of two number is= %f",divide1);
				break;



            case 5:
                 printf("Enter angle in degree\n");
                 scanf("%f",&degree);
                 float redian = degree*PI/180;
                 float ans = 1;
                 float temp = 1;
                 int acc = 5;
                 for(i=1;i<=2*acc;i+=2);
                    {
                      temp = temp*(-1)*redian*redian/(i*(i+1));
                      ans = ans + temp;
                    }

                 printf("cos(%f)=%f\n",degree,ans);


            case 6:
                printf("Enter the  number :");
                scanf("%f",&x);
				t1 = sin(x*(PI/180));

				printf("%f",t1);
				break;




            case 7:
                printf("Enter the number :");
				scanf("%f",&x);
				t2 = tan(x*(PI/180));

				printf("%f",t2);
				break;


            case 8:
                printf("Enter the number :");
				scanf("%f",&x);
				t3 = log10(x);
				printf("%f",t3);
				break;
			case 9:
                printf("Enter the number :");
				scanf("%f",&x);
				t4=log2(x);
				printf("%f",t4);
				break;


			case 10:
			     printf("Enter the number :");
                 scanf("%f",&n);
                 for(i=0.01;i*i<n;i=i+0.01);

                 printf("%f",i);
                 break;



			case 11:
			     printf("Enter the two number :");
                 scanf("%f%f",&num1,&num2);
                 for(i=1;i<=num2;i++)
                  {
                      p = p*num1;
                  }

                printf("power = %f",p);
                break;



			case 12:
			     printf("Enter the powerof e :");
                 scanf("%f",&power);
                 int acc2 = 30;
                 float ans2 = 1;
                 float temp2 = 1;
                 for(i=1;i<=acc2;i++)
                  {
                      temp2 = temp2*power/i;
                      ans2 = ans2+temp2;
                  }

                 printf("%f",ans2);
                 break;


            case 13:
              printf("\n");
              char string[1024];
              long  int numbers[512],i;


              printf("Enter numbers following this Model: a-b+c/d*e\n");
              getchar();
              printf("Enter integers: ");
              fgets(string, sizeof(string), stdin);

              char *endptr, *ptr = string;
              int count = 0;
              while (*ptr != '\0') {
                  if (isdigit(*ptr)) {
                        numbers[count++] = strtol(ptr, &endptr, 10);
                    }
                else {
                        endptr = ptr + 1;
                   }

                 ptr = endptr;
              }

               double rslt;
               i=0;
               rslt = numbers[i]-numbers[i+1]+numbers[i+2]/(numbers[i+3]*1.0)*numbers[i+4];
               printf("The result of the equation is: %.2lf\n",rslt);
               break;


			default:
				printf("Wrong Input");
				break;


}


return 0;
}


int add(int x, int y){

		int z;
		z=x+y;
		return(z);


}
int sub(int x, int y){

        int z;
		z=x-y;
		return(z);
}


int multi(int x, int y){

        int z;
		z=x-y;
		return(z);
}


int divide(int x, int y){

        int z;
		z=x-y;
		return(z);
}



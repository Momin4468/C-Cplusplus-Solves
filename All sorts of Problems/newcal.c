#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int add(int x, int y);
int sub(int x, int y);
int multi(int x, int y);
int divide(int x, int y);


int main(){

    int choice;
	float num1,num2,sum,sub1,multi1,divide1;
	float x,y,t,t1,t2,t3,t4,t5,t6,t7;


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

                printf("Enter the number :");
				scanf("%f",&x);
				t = cos(x*(3.14159265/180));

				printf("%f",t);
				break;


            case 6:
                printf("Enter the number :");
				scanf("%f",&x);
				t1 = sin(x*(3.14159265/180));

				printf("%f",t1);
				break;


            case 7:
                printf("Enter the number :");
				scanf("%f",&x);
				t2 = tan(x*(3.14159265/180));

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
				scanf("%f",&x);
				t5=sqrt(x);
				printf("%f",t5);
				break;


			case 11:
                printf("Enter two number :");
				scanf("%f %f",&x,&y);
				t6=pow(x,y);
				printf("%f",t6);
				break;


			case 12:
                printf("Enter the number :");
				scanf("%f",&x);
				t7 = exp(x);
				printf("%f",t7);
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


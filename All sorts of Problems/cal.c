#include<stdio.h>
#include<stdlib.h>
int add(int x, int y);
int sub(int x, int y);

int main(){

	int choice,num1,num2,sum1;

	printf("1 for Addition:\n");
	printf("2 for Subtraction:\n");
	printf("3 for Multiplication:\n");

	scanf("%d",&choice);
	printf("Enter two number from keyboard: ");
	scanf("%d %d",&num1,&num2);

	switch(choice){


			case 1:
				sum1=add(num1,num2);
				printf("The sum of two number is= %d",sum1);
				break;
			default:
				printf("Wrong Input");
				break;


}


}


int add(int x, int y){

		int z;
		z=x+y;
		return(z);


}

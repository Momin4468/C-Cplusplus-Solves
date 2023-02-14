#include<stdio.h>
#include<math.h>

int main(){

int a,b,c,d,e,M;
double rslt;
printf("Here you can solve  an arithmetic equation of five numbers.\n");
printf("Enter five numbers: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);


printf("Model-1: a-b+c/d*e\n");
printf("Model-2: a-b+c*d/e\n");
printf("Model-3: a/b+c-d*e\n");
printf("Choose a model: ");
scanf("%d", &M);

printf("\n\n Turjo sir toh example e model 1 use korse..so shudu oita o use krte paros.\n");

switch(M){

   case 1:{
        rslt = a-b+c/(d*1.0)*e;
        printf("The result of the equation is: %.2lf\n",rslt);
        break;
   }
   case 2:{
        rslt = a-b+c*d/(1.0*e);
        printf("The result of the equation is: %.2lf\n",rslt);
        break;
   }
   case 3:{
        rslt = (a*1.0)/b+c-d*e;
        printf("The result of the equation is: %.2lf\n",rslt);
        break;
   }
   default: printf("Choose a valid model.\n\n");
     break;
}

return 0;
}

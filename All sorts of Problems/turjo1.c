#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(){
char string[1024];
long numbers[512],i;


printf("Enter numbers following this Model: a-b+c/d*e\n");
printf("Enter integers: ");
fgets(string, sizeof(string), stdin);

char *endptr, *ptr = string;
int count = 0;

while (*ptr != '\0') {
    if (isdigit(*ptr)) {
        numbers[count++] = strtol(ptr, &endptr, 10);
    } else {
        endptr = ptr + 1;
    }

    ptr = endptr;
}

/*for(i=0;i<count;i++){
printf("   %ld\n" ,numbers[i]);
}*/



/*printf("Model-2: a-b+c*d/e\n");
printf("Model-3: a/b+c-d*e\n");
printf("Choose a model: ");
scanf("%d", &M);

printf("\n\n Turjo sir toh example e model 1 use korse..so shudu oita o use krte paros.\n");*/

//switch(M){

  // case 1:{
        double rslt;
        i=0;
        rslt = numbers[i]-numbers[i+1]+numbers[i+2]/(numbers[i+3]*1.0)*numbers[i+4];
        printf("The result of the equation is: %.2lf\n",rslt);
  /*   break;
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
}*/

return 0;
}

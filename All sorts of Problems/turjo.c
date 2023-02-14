#include<stdio.h>
#include<math.h>

int main(){

double y[200],rslt1,rslt2,rslt3,rslt4;
int i,k1,k2,k3,k4,j;
char op[5][2];

i=0;
while(i<200){

       scanf("%d%s",&y[i],&op[i]);


      if(op[i]=="\n")
    {
        j = i;
	   break;
    }
      i++;
}


for(i=0;i<j;i++){

        if(op[i]=="/"){
            rslt1 = y[i]/y[i+1];
            y[i]=rslt1;
            y[i+1]=rslt1;
            k1 = i;
            printf("\nLine No -1:  %lf  %lf %lf %d \n\n",y[i],y[i+1],rslt1,k1);
        }
         if(op[i]=="*"){
            rslt2 = y[i]*y[i+1];
            y[i]=rslt2;
            y[i+1]=rslt2;
            k2 = i;
                        printf("\nLine No -1:  %lf  %lf %lf %d \n\n",y[i],y[i+1],rslt1,k1);
        }
         if(op[i]=="+"){
            rslt3 = y[i]+y[i+1];
            y[i]=rslt3;
            y[i+1]=rslt3;

            k3 = i;
                        printf("\nLine No -1:  %lf  %lf %lf %d \n\n",y[i],y[i+1],rslt1,k1);
        }
         if(op[i]=="-"){
            rslt4 = y[i]-y[i+1];
            y[i]=rslt4;
            y[i+1]=rslt4;
            k4= i;
                        printf("\nLine No -1:  %lf  %lf %lf %d \n\n",y[i],y[i+1],rslt1,k1);
        }
        return 0;
}





}

#include<stdio.h>
int main()
{
    int A,B,C,D,E,F;
    scanf("%d",&A);
    B=A%365;C=(A-B)/365;
    if(B>=30){
        D=B%30;
        E=(B-D)/30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",C,E,D);
    }
    else{
            E=0;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",C,E,B);}
    return 0;
}


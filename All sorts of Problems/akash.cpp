#include<stdio.h>
int main()
{
    double A,B,C;
    double a,b,c;
    scanf("%lf%lf%lf",&A,&B,&C);
    a=(A*A);
    b=(B+C);
    c=((B*B)+(C*C));
    if(A>=b){
     printf("NAO FORMA TRIANGULO\n");
    }
    else if(a==c){
            printf("TRIANGULO RETANGULO\n");
    }
    else if(a>c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(a<c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && B==C ){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A!=B || A!=C ){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}

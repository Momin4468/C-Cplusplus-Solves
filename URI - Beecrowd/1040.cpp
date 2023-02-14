#include<stdio.h>
int main()
{
    float a,b,c,d,x,n,p;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    x=((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1f\n",x);
    if (x>=7)
        printf("Aluno aprovado.\n");
    else if(x<5)
        printf("Aluno reprovado.\n");
    else if(5<x<6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&n);
        p=(n+x)/2;
        printf("Nota do exame: %.1f\n",n);
       if (p>=5)
            printf("Aluno aprovado.\n");

       else if (p<5)
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",p);}
        return 0;

}

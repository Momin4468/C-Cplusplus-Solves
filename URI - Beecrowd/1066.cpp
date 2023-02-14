#include <stdio.h>
int main()
{
    int a,X,c=0,d=0,f=0,g=0;
    for(a=1;a<=5;a++)
    {
        scanf("%d", &X);
        if(X%2==0) c++;
        if(X%2==1||X%2==-1) d++;
        if(X>0) f++;
        if(X<0) g++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n ",c,d,f,g);
    return 0;
}
  //compare korthe hbe.

  #include <stdio.h>
 int main()
{
    int a,b,c1=0,c2=0,c3=0,c4=0;
    for(a=1;a<=5;a++)
    {
        scanf("%d", &b);
        if(b%2==0) c1++;
        if(b%2==1||b%2==-1) c2++;
        if(b>0) c3++;
        if(b<0) c4++;
    }
    printf("%d valor(es) par(es)\n",c1);
    printf("%d valor(es) impar(es)\n",c2);
    printf("%d valor(es) positivo(s)\n",c3);
    printf("%d valor(es) negativo(s)\n",c4);

    return 0;
}

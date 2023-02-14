#include<stdio.h>
int main()
{
    int N,A,C,M,H;
    scanf("%d",&N);
    A=N%60;M=(N-A)/60;
    if(M>=60){
        C=M%60;
        H=(M-C)/60;
        printf("%d:%d:%d\n",H,C,A);
    }
    else{
            H=0;
    printf("%d:%d:%d\n",H,M,A);}
}

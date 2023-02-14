#include<stdio.h>
int main()
{
    int a,b,c,d,hr,min;
    scanf("%d%d%d%d",&a,&c,&b,&d);
    if(a<b && c<d){
        hr=b-a;
        min=d-c;
    }
    else if(a<b && c>d){
        hr=b-a-1;
        min=60-c+d;
    }
    else if(a<b && c==d){
        hr=b-a;
        min=c-d;
    }
    else if(a>b && c==d){
        hr=b-a+24;
        min=c-d;
    }
    else if(a>b && c>d){
        hr=b-a+24-1;
        min=60-c+d;
    }
    else if(a>b && c<d){
        hr=b-a+24;
        min=d-c;
    }
    else if(a==b && c==d){
        hr=24;
        min=0;
    }
    else if(a==b && c>d){
        hr=23;
        min=60-c+d;
    }
    else if(a==b && c<d){
        hr=24;
        min=0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hr,min);
    return 0;
}

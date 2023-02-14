#include<stdio.h>
#include<string.h>
int i,j;
int A()
{
    for(i=1;i<6;i++){
        for(j=1;j<16;j++){

          if((i==2||i==4||i==5)&&j==2) printf(".");
          else if((i==2||i==4)&&j==5) printf(".");
          else if((i==2||i==3||i==4)&&(j==8||j==9)) printf(".");
          else if((i==2||i==3||i==4)&&j==11) printf(".");
          else if((i==2||i==4)&&(j==14||j==15)) printf(".");
          else printf("*");
        }
        printf("\n");
     }

}
/*int B()
{
    for(i=1;i<6;i++){
        for(j=1;j<4;j++){
            printf("*");
          if((i==2||i==4)&&j==2) printf(".");
        }
        printf("\n");
     }

}
int C()

{
    for(i=1;i<6;i++){
        for(j=1;j<4;j++){
            printf("*");
          if((i==2||i==3||i==4)&&(j==2||j==3)) printf(".");
        }
        printf("\n");
     }
}
int D()
{
    for(i=1;i<6;i++){
        for(j=1;j<4;j++){
            printf("*");
          if((i==2||i==3||i==4)&&j==2) printf(".");
        }
        printf("\n");
     }
}
int E()
{
    for(i=1;i<6;i++){
        for(j=1;j<4;j++){
            printf("*");
          if((i==2||i==4)&&(j==2||j==3)) printf(".");
        }
        printf("\n");
     }
}
*/
int main()
{
    int k,l,n;
    scanf("%d",&n);
    char s[2018];
    scanf("%s",&s);
    l = strlen(s);
    /*for(k=0;k<l;k++){
        if(s[k]=='A') A();
        if(s[k]=='B') B();
        if(s[k]=='C') C();
        if(s[k]=='D') D();
        if(s[k]=='E') E();

}*/A();
return 0;
}

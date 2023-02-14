#include<stdio.h>
int main(){

 char a[55];
 int i,j;

 scanf("%d", &j);

 a[0] = 'W';
 for(i=1;i<=j;i++){
    a[i] = 'o';
 }
 a[j+1]='w';
 a[j+2]='\0';

 printf("%s", a);
 return 0;
}

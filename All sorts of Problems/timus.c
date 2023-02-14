#include<stdio.h>
#include<string.h>

int main(){

int n,k,c,i,sum =1;
char b[20];


scanf("%d", &n);
scanf("%s", &b);

k = strlen(b);
k = k -1;
c = n%k;

/*if(c == 0){

    for(i = 0; i<n; i++){
        sum = (n - (i*k)) * sum;
        if((n - (i*k))==k) break;
    }
  }
else {*/

    for(i = 0; i<4; i++){
        sum = (n - (i*k)) * sum;
     //    if((n - (i*k))==c) break;
       }
   //}

printf("%d\n",sum);

return 0;

}

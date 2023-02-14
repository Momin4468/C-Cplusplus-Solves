#include<stdio.h>

int mark[2000001];
int prime[999999],sibling[100001],i,j,k;

void sieve(int n){
   for(i=3;i*i<n;i++){
     for(j=i+i;j<n;j+=i){
        mark[j] = 1;
     }
   }
   prime[0] = 2;
   j = 1;
   for(i=3;i<n;i+=2){
    if(mark[i]==0) prime[j++] = i;
   }
   k = 0;
   i = 0;
   while(k<n){
    if(prime[i+1]==prime[i]+2){
        sibling[k++] = prime[i];
    }
    else i++;
   }
}

int main(){
  int n;
  scanf("%d", &n);
  sieve(n);
  for(i=0;i<j;i++){
    printf("%d ",prime[i]);
  }
  printf("\nj = %d",j);
  printf("%c%d, %d%c\n",'(',sibling[n-1],sibling[n-1]+2,')');
}

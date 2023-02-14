#include<stdio.h>
int main(){

  int n;
  scanf("%d", &n);
  int a[n+1],i;

  for( i=0;i<n; i++){
    scanf("%d", &a[i]);
  }

  if(n==2){
    if(a[0]==a[1]) printf("No\n");
    else printf("Yes\n");
  }
  else if(n%2 != 0){
    printf("No\n");
  }
  else{

     int j = n/2,cnt1=1,cnt2=1;

     for(i=0;i<j-1;i++){
        if(a[i]>a[i+1]) cnt1++;
     }
     for(i=j;i<n-1;i++){
        if(a[i]<a[i+1]) cnt2++;
     }

     if((cnt1+cnt2)==n) printf("Yes\n");
     else printf("No\n");
  }
  return 0;
}

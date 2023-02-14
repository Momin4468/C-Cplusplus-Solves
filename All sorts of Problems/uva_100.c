#include<stdio.h>
 int main()
 {
     int i,j,a,b,k,d,e,cnt,temp,m,n;
     while(scanf("%d%d",&i,&j)!=EOF){
         m = i, n = j;
        if(i>j){
            temp = i;
            i = j;
            j = temp;
        }
        e = 0;
        for(k = i;k<=j;k++){
                cnt = 1;d = k;
           while(d!=1){
               if(d%2 != 0) d = 3*d+1;
               else d/=2;
               cnt++;
           }
         if(cnt>e) e = cnt;
      }
      printf("%d %d %d\n",m,n,e);

     }
     return 0;
 }

#include<stdio.h>
#include<math.h>

int main(){
   int t;
   long long int s,i,sqt,col,row,extra,temp;

   scanf("%d", &t);
   for(i=1;i<=t;i++){
    scanf("%lld", &s);
    sqt = ceil(sqrt(s));
    extra = sqt*sqt - s;
    row = 0, col = 0;
    if(extra < sqt){
        row = extra + 1;
        col = sqt;
    }
    else{
            row = sqt;
            col = s - (sqt - 1) * (sqt - 1);
    }
    if(sqt%2==0) {
            temp = row;
            row = col;
            col = temp;
    }

    printf("Case %d: %lld %lld\n",i,row,col);
   }
   return 0;
}

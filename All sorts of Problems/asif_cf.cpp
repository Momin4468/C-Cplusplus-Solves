#include <stdio.h>

int main()
{
   int t, n, i, half, sum1, sum2;
   scanf("%d", &t);
   while (t--) {
      scanf("%d %d", &n, &k);
      int a[n+1];
      for(i=0;i<n;i++) scanf("%d", &a[i]);

      if(n==k){
        printf("%d\n", n+k);
        for(i=0;i<n;i++) printf("%d ", a[i]);
        for(i=0;i<n;i++) printf("%d ", a[i]);
        printf("\n");
      }
      else{
        f = 0;
        for(i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                f = 1;
                break;
            }
        }

        if(f==0) printf("-1\n");
        else{

        }
      }
   }
   return 0;
}

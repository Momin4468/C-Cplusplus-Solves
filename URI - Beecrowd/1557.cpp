#include<stdio.h>
int main()
{
   long long int i,j,k,l,m,arr[100][100];
   int n;

    for(;;){
        scanf("%d", &n);

        if(n==0)break;

        long long int arr[n][n];

        m = 1; l=1;
        for(i=0; i<n; i++){

                   m =l;

            for(j=0;j<n;j++){
                arr[i][j] = m;
                m=m*2;
            }
           l = l*2;

        }

             for(i=0; i<n; i++){

            for(j=0;j<n;j++){
                if(n == 1) printf("%lld", arr[i][j]);

               else if(n ==2) {
                   if(j == 0) printf("%lld",arr[i][j]);
                   else printf(" %lld", arr[i][j]);
               }
                else if(n ==2) {
                   if(j == 0) printf("%lld",arr[i][j]);
                   else printf(" %lld", arr[i][j]);
                }
                 else if(n ==3 || n==4) {
                   if(j == 0) printf(" %lld",arr[i][j]);
                   else printf("%3lld", arr[i][j]);
                }
                 else if(n ==4||n==5) {
                   if(j == 0) printf("%3lld",arr[i][j]);
                   else printf("%4lld", arr[i][j]);
                }
                 else if(n ==6 || n==7) {
                   if(j == 0) printf("%4lld",arr[i][j]);
                   else printf("%5lld", arr[i][j]);
                }
                 else if(n ==8||n==9) {
                   if(j == 0) printf("%5lld",arr[i][j]);
                   else printf("%6lld", arr[i][j]);
                }
                 else if(n ==10) {
                   if(j == 0) printf("%6lld",arr[i][j]);
                   else printf("%7lld", arr[i][j]);
                }
                else if(n ==11||n==12) {
                   if(j == 0) printf("%7lld",arr[i][j]);
                   else printf("%8lld", arr[i][j]);
                }
                else if(n ==13||n==14) {
                   if(j == 0) printf("%8lld",arr[i][j]);
                   else printf("%9lld", arr[i][j]);
                }
                else if(n ==15) {
                   if(j == 0) printf("%9lld",arr[i][j]);
                   else printf("%10lld", arr[i][j]);
                }

            }

              printf("\n");
        }
         printf("\n");

        }
}

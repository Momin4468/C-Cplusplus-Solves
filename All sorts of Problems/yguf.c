#include<stdio.h>


int main()
{

    int i,t,b,c,a[500],p,stick[400],r[400],j,n;


    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%d", &n);
        for(j=0;j<(4*n);j++){
            scanf("%d", &a[j]);
        }

        int k,m=0;
        for(j=0;j<(4*n);j++){
            for(k=j+1;k<(4*n);k++){
                if(a[j]==a[k]){
                  if(stick[m-1]!=a[k] &&(m!=0))
                  stick[m] = a[k];
                  if(m==0) stick[m] = a[k];
                  m++;
                  break;
                }
            }
        }
        printf("\n");
        for(j=0;j<m;j++){
               printf("%d ",stick[j]);
        }
        p=0;k= 0;
        int w = m/2;
        //printf("\n w= %d m-w = %d\n",w,(m-w));
        for(i=0;i<w;i++){

           for(j=w;j<m;j++){
             r[k] = (stick[i]*stick[j]);
             k++;
             //printf("\n hoise\n");
           }
          // p++;
        }
        printf("\n");
        //for(i=0;i<p;i++){
            for(j=0;j<k;j++){
               printf("%d ",r[j]);
            }
            printf("\n");
        //}
        int flag=0;
        for(i=0;i<k;i++){
            for(j=i;j<k;j++){
                if(r[i]==r[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
  char a[2010],b[1005],c[2010];
  int t,j,i,p,k,I,W,w;
  scanf("%s", a);
  j = strlen(a);
  strcpy(c,a);
  strcat(a,c);
  scanf("%d", &t);
  for(i=1;i<=t;i++){
    scanf("%s", b);
    p = strlen(b);
    if(p>j) printf("No\n");
    else{
         W=0;
         for(k=0;a[k]!='\0';k++){
           if(a[k]==b[0]){
                I = k+1;
                W = 1;
                break;
            }
        }
        if(W==0) printf("No\n");
        else{
         for(w=1;w<p;w++){
            if(a[I]!=b[w]){
                printf("No\n");
                break;
            }
            W++;I++;
         }
         if(w==p) printf("Yes\n");
       }
    }
  }

  return  0;
}

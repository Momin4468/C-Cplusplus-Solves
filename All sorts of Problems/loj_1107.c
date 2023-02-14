#include<stdio.h>
int main(){

int x1,y1,x2,y2,z1,z2,t,c,i,j;

scanf("%d", &t);
for(i=1;i<=t;i++){
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d", &c);

    printf("Case %d:\n",i);
    for(j=1;j<=c;j++){
        scanf("%d%d", &z1, &z2);
        if(((z1>x1) && (z1<x2))&&((z2>y1) && (z2<y2))) printf("Yes\n");
        else printf("No\n");
    }
 }
 return 0;

}

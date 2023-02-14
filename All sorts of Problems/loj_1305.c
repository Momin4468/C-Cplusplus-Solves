#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy,area,t,i;

    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d%d%d%d", &ax,&ay,&bx,&by,&cx,&cy);

        dx  = cx+ax-bx;
        dy = cy+ay-by;
        area = abs(0.5 * (((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax))));
        printf("Case %d: %d %d %d\n",i,dx,dy,area);
    }
  return 0;
}

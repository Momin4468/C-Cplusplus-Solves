#include <stdio.h>
int main()
{
    char a[4], b[2],c[2],d[2],e[2],f[4];
    int i,j,k,l,m,n,p,q,r,s,t,u,v,w,x,y,z,h,h1,h2;
    scanf("%s%d", &a,&i);
    scanf("%d%s%d%s%d", &j,&b,&k,&c,&l);
    scanf("%s%d", &f,&p);
    scanf("%d%s%d%s%d", &q, &d,&r,&e,&s);
    m=60-l+s;
    n=(60-k-1+r)*60;
    t=(24-1-j+q)*3600;
    u=(p-i-1)*86400;
    v=m+n+t+u;

    h=v/86400;
    printf("%d dia(s)\n", h);

    h=v%86400;
    h1=h/3600;
    printf("%d hora(s)\n", h1);

    h1=h%3600;
    h2=h1/60;
    printf("%d minuto(s)\n", h2);

    h2=h1%60;
    printf("%d segundo(s)\n", h2);
    return 0;
}

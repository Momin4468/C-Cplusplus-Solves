#include<stdio.h>
#include<string.h>
int main()
{
    char s[25],h_s[25],l_s[25];
    double h,w,l,vol,h_vol,l_vol,c_vol,p_vol,a_vol;
    int t,i,j,n,f;

    scanf("%d", &t);
    for(i=1;i<=t;i++){
        scanf("%d", &n);
        h_vol = 0.0;
        l_vol = 0.0;
        f = 0;
        vol = 0.0;
        for(j=1;j<=n;j++){
            p_vol = vol;
            scanf("%s %lf %lf %lf",s,&h,&w,&l);
            vol = h*w*l;
            a_vol = vol;
            if(j>1 && j<n && (a_vol != p_vol)){
              if(a_vol>p_vol){
                strcpy(h_s,s);
                f = 1;
              }
              else if(a_vol<p_vol){
                strcpy(l_s,s);
                f = 1;
              }
            }
        }

        if(f==0) printf("Case %d: no thief\n",i);
        else printf("Case %d: %s took chocolate from %s\n",i,h_s,l_s);
    }
    return 0;
}

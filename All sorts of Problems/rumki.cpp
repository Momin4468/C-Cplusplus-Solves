#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1,i1,j1,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    i=0;
    j=0;
    k=0;
    l=0;
    m=0;
    n=0;
    o=0;
    p=0;
    q=0;
    r=0;
    s=0;
    t=0;
    u=0;
    v=0;
    w=0;
    x=0;
    y=0;
    z=0;
    cin>>t1;
    char ch[1001],tem;
    getchar();
    for(i1=0;i1<t1;i1++)
    {
        //char ch[1001],tem;
        //getchar();
        gets(ch);
        for(j1=0;ch[j1]!='\0';j1++)
        {
            if(ch[j1]=='a') a++;
            else if(ch[j1]=='b') b++;
            else if(ch[j1]=='c') c++;
            else if(ch[j1]=='d') d++;
            else if(ch[j1]=='e') e++;
            else if(ch[j1]=='f') f++;
            else if(ch[j1]=='g') g++;
            else if(ch[j1]=='h') h++;
            else if(ch[j1]=='i') i++;
            else if(ch[j1]=='j') j++;
            else if(ch[j1]=='k') k++;
            else if(ch[j1]=='l') l++;
            else if(ch[j1]=='m') m++;
            else if(ch[j1]=='n') n++;
            else if(ch[j1]=='o') o++;
            else if(ch[j1]=='p') p++;
            else if(ch[j1]=='q') q++;
            else if(ch[j1]=='r') r++;
            else if(ch[j1]=='s') s++;
            else if(ch[j1]=='t') t++;
            else if(ch[j1]=='u') u++;
            else if(ch[j1]=='v') v++;
            else if(ch[j1]=='w') w++;
            else if(ch[j1]=='x') x++;
            else if(ch[j1]=='y') y++;
            else if(ch[j1]=='z') z++;
        }

        for(int j2=0;ch[j2]!='\0';j2++){
          for(j1=0;ch[j1]!='\0';j1++)
          {
            if((ch[j1]>ch[j1+1]) && (ch[j1+1]!='\0')){
              tem=ch[j1];
              ch[j1]=ch[j1+1];
              ch[j1+1]=tem;
            }
          }
        }
        printf("#rearranged:  %s\n",ch);

       int k;
       char cha[1001];
       cha[0] = ch[0];
       k=1;

       for(j1=1;ch[j1]!='\0';j1++){
         if((ch[j1]!=ch[j1-1])){
            cha[k] = ch[j1];
            k++;
         }

       }
       cha[k] = '\0';
       printf("#extracted:  %s\n",cha);

       for(j1=0;cha[j1]!='\0';j1++)
        {

            if(cha[j1]=='a') printf("a = %d\n",a);
            else if(cha[j1]=='b') printf("b = %d\n",b);
            else if(cha[j1]=='c') printf("c = %d\n",c);
            else if(cha[j1]=='d') printf("d = %d\n",d);
            else if(cha[j1]=='e') printf("e = %d\n",e);
            else if(cha[j1]=='f') printf("f = %d\n",f);
            else if(cha[j1]=='g') printf("g = %d\n",g);
            else if(cha[j1]=='h') printf("h = %d\n",h);
            else if(cha[j1]=='i') printf("i = %d\n",i);
            else if(cha[j1]=='j') printf("j = %d\n",j);
            else if(cha[j1]=='k') printf("k = %d\n",k);
            else if(cha[j1]=='l') printf("l = %d\n",l);
            else if(cha[j1]=='m') printf("m = %d\n",m);
            else if(cha[j1]=='n') printf("n = %d\n",n);
            else if(cha[j1]=='o') printf("o = %d\n",o);
            else if(cha[j1]=='p') printf("p = %d\n",p);
            else if(cha[j1]=='q') printf("q = %d\n",q);
            else if(cha[j1]=='r') printf("r = %d\n",r);
            else if(cha[j1]=='s') printf("s = %d\n",s);
            else if(cha[j1]=='t') printf("t = %d\n",t);
            else if(cha[j1]=='u') printf("u = %d\n",u);
            else if(cha[j1]=='v') printf("v = %d\n",v);
            else if(cha[j1]=='w') printf("w = %d\n",w);
            else if(cha[j1]=='x') printf("x = %d\n",x);
            else if(cha[j1]=='y') printf("y = %d\n",y);
            else if(cha[j1]=='z') printf("z = %d\n",z);
        }

       a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    i=0;
    j=0;
    k=0;
    l=0;
    m=0;
    n=0;
    o=0;
    p=0;
    q=0;
    r=0;
    s=0;
    t=0;
    u=0;
    v=0;
    w=0;
    x=0;
    y=0;
    z=0;
    }
    return 0;
}

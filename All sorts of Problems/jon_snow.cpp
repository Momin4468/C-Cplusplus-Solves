//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

#define     lli                 long long int
#define     ulli                unsigned long long int

#define     ifor(st,lim)        for(int i=st;i<lim;i++)
#define     jfor(stt,llim)      for(int j=stt;j<llim;j++)
#define		Test(tt)			for(int test=1;test<=tt;test++)
#define		For(var,srt,nnd)	for(var=srt;var<nnd;var++)
#define		Rfor(var,srt,nnd)	for(var=srt;var>=nnd;var--)

#define     pb                  push_back
#define     mkp                 make_pair
#define		all(var)			var.begin(),var.end()

#define     pi                  acos(-1)
#define     mod                 100000007

#define     Clear(var,val)      memset(var,val,sizeof(var))
#define     len(var)            (int)(var.length())
#define     vlen(vect)          (int)(vect.size())
#define     line(ss)            getline(cin,ss)

#define		FIO					ios_base::sync_with_stdio(false);cin.tie(NULL)

#define		sclock				int start_s=clock()
#define		eclock				int end_s=clock()
#define		pclock				printf("\nRuntime :: %.2lf\n", (double)(end_s-start_s)/CLOCKS_PER_SEC)

/****************************** IO ************************************/
#define		ina(a)				scanf("%d",&a)
#define		inb(a,b)			scanf("%d %d",&a,&b)
#define		inc(a,b,c)			scanf("%d %d %d",&a,&b,&c)
#define		ins(chr)			scanf("%s",s)
#define		inlla(a)			scanf("%lld",&a)
#define		inllb(a,b)			scanf("%lld %lld",&a,&b)
#define		inllc(a,b,c)		scanf("%lld %lld %lld",&a,&b,&c)

#define		outa(a)				printf("%d",a)
#define		outlla(a)			printf("%lld",a)

#define		yn(b)				puts(b ? "YES" : "NO")

#define		outar(ar,ln,c)		for(int i=0;i<ln;i++){printf("%d%c",ar[i],c);}

#define		outCase()			printf("Case %d:",test)

#define		blank				printf("\n")
/**********************************************************************/

struct TP{

};

lli n,k,g;

void cal()
{
	lli l=1,r=k,m;
	g=k;
	while(l<=r)
	{
		m=l+(r-l)/2;
		if(m*(n-1)>=k)
		{
			g=m;
			r=m-1;
		}
		else l=m+1;
	}
}

int main()
{
    FIO;
/******************************* C ************************************/

	lli t,tmp,x;
	inlla(t);
	while(t--)
	{
		inllb(n,k);
		cal();
		tmp=g*n;
		x=g*(n-1);
		outlla(tmp-(x-k)-1);blank;
	}

/**********************************************************************/
    return 0;
}


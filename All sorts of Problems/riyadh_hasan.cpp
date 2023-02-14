#include<bits/stdc++.h>
using namespace std;
///------------input------------//
#define fi freopen("in.txt","r",stdin)
#define fo freopen("out.txt","w",stdout)
#define sc1(a) scanf("%lld",&a)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define scar(arr,n) for(int index=0;index<n;index++)sc1(arr[index]);

///------------Vector------------///

#define vs vector<string>
#define vll vector<long long int >
#define vc vector<char>
#define vpll vector<pair<long long,long long>>
#define vvll vector<vector<long long>>
#define up(v,x) upper_bound(v.begin(),v.end(),x)-v.begin()
#define low(v,x) lower_bound(v.begin(),v.end(),x)-v.begin()
#define ALL(a) (a).begin(),(a).end()

///-------------LOOP--------------///

#define foreach(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define cases ll t,ti=0;cin>>t;while((ti++)!=t)
#define fr(i,a,n) for(i = (a); i < (n); i++)
#define fri(i,a,n) for(i = (a); i <= (n); i++)

///------------limite------------///
#define eps 1e-13
#define mod 1000000007LL
#define PI acos(-1)
#define INF 1000000011

///------------PAIR------------///

#define pii pair<int, int>
#define pll pair<long long, long long>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define pcc pair<char, char>
#define pdd pair<double, double>
#define mk make_pair
#define ff first
#define ss second

///------------Extra------------///

#define clc clock_t time_req=clock()
#define pclc cout<<setprecision(10)<<(float)time_req/CLOCKS_PER_SEC
#define ll long long int
#define nl printf("\n")
#define qll queue<long long int >
#define mll map<long long int , long long int>
#define pb(x) push_back(x)
#define gtl(x) getline(cin, (x))
#define flsh fflush(stdout)
#define sws ios_base::sync_with_stdio(false); cin.tie(0)
#define mst(x) memset(x,0,sizeof(x))
#define Log(x,a) (log(a)/log(x))
#define PNY(f,a) printf((f==a)?"NO\n":"YES\n");
#define PYN(f,a) printf((f==a)?"YES\n":"NO\n");
#define yes printf("YES\n");
#define no printf("NO\n");
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
bool CMP(int a, int b)
{
    return a>b;
}
bool CMPpair(pair<ll,ll>a, pair<ll,ll> b)
{
    if(a.ff!=b.ff)
        return a.ff<b.ff;
    return a.ss<b.ss;
}
ll GCD(ll a,ll b)
{
    if(a%b==0)
        return b;
    else
        return GCD(b,a%b);

}
ll LCM(ll a,ll b)
{
    return (a*b)/GCD(a,b);

}
int main()
{
    cases
    {
        ll n,k;
        sc2(n,k);
        ll m=n-1;
        ll y=k/m;
        ll x=n*y;
        if(k%m)printf("%lld\n",x+(k%m));
        else printf("%lld\n",x-1);
    }
}


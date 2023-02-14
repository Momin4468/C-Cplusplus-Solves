#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
#define FastIO      ios_base::sync_with_stdio(false); cin.tie(0);
#define aPrint(a,b,c)for(int i=b;i<=c;i++)cout<<a[i]<<" ";cout<<endl;
#define vPrint(a)   for(int i=0;i<a.size();i++)cout<<a[i]<<" ";cout<<endl;
#define Case(t)     printf("Case %d: ", t)
#define clr(x,a)    memset(x,a,sizeof(x))
#define debug(x)    cerr<<#x<<" = "<<(x)<<"\n"

#define umap        unordered_map
#define pii         pair<ll, ll>
#define ff          first
#define ss          second
#define mp          make_pair
#define pb          push_back
#define ppb         pop_back
#define sf          scanf
#define pf          printf
#define all(a)      a.begin(),a.end()
#define allr(a)     a.rbegin(),a.rend()
#define Unique(a)   sort(all(a)), a.erase(unique(all(a)),a.end())
template <class T> inline T bigmod(T b,T p,T M){T ret=1;for(;p>0;p>>=1){if(p&1) ret=(ret*b)%M;b=(b*b)%M;}return (T)ret;}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b){return a*b / gcd<T>(a, b);}
template <class T> inline T power(T b,T p){ll x=1;while(p--)x*=b;return x;}
const int mod = 1e8 + 7;

#define pi        acos(-1.0)//3.1415926535897932
#define inf       1e9 + 7
#define MAX       20005
/// 'N'+'A'+'E'+'E'+'E'+'M' ///
int main()
{
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
    FastIO;

    int t; cin>>t; while(t--){
        ll n; cin>>n;
        ll mov = 0, A = 0, B = 0, arr[n+5];
        for(int i=1; i<=n; i++) cin>>arr[i];

        int i = 1, j = n, prv = 0, turn = 1;
        while(i <= j){
            mov++;
            ll now = 0;
            if(turn){
                for( ; i<=j; i++){
                    A += arr[i];
                    now += arr[i];
                    if(now > prv){
                        i++;
                        break;
                    }
                }
            }
            else {
                for( ; j>=i; j--){
                    B += arr[j];
                    now += arr[j];
                    if(now > prv) {
                        j--;
                        break;
                    }
                }
            }

            prv = now;
            turn = !turn;
        }
        cout<<mov<<" "<<A<<" "<<B<<endl;
    }


    #ifndef ONLINE_JUDGE
        printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}


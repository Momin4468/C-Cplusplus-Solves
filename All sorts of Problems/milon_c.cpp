#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j;
        cin>>n>>k;
        int ans=k,an1=1;
        while(ans/n-an1/n!=0)
        {
            //cout<<ans<<" "<<an1<<endl;
           int c= ans/n-an1/n;
           an1=ans;
           ans+=c;
        }
        cout<<ans<<endl;
    }

    return 0;
}


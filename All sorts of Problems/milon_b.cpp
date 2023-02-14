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
        int x=n-(k-1)*2;
        int y=n-(k-1);
        if(x%2==0&&x>0)
        {
            cout<<"yes\n";
            for(i=0;i<k-1;i++)cout<<2<<" ";cout<<x<<endl;
        }
        else if(y%2==1&&y>0)
        {
            cout<<"yes\n";
            for(i=0;i<k-1;i++)cout<<1<<" ";cout<<y<<endl;
        }
        else cout<<"no\n";
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int>x;
        int mul=1;
        while(n>9)
        {
            int y=n%10;
            n/=10;
            int z=y*mul;
            mul*=10;
            if(z==0)continue;
            x.push_back(z);
        }
        int z=n*mul;
        x.push_back(z);
        cout<<x.size()<<endl;
        cout<<x[0];
        for(i=1;i<x.size();i++)cout<<" "<<x[i];cout<<endl;
    }
}


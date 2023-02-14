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
        int x[n];
        for(i=0;i<n;i++)cin>>x[i];
        int j,k,a=x[0],b=0,pre=x[0],c=1;
        i=1;j=n-1;
        while(i<=j)
        {
            if(c%2==1)
            {
                int sum=0;
                while(j>=i&&sum<=pre)
                {
                    sum+=x[j--];
                }
                b+=sum;
                pre=sum;
            }
            else{
                 int sum=0;
                while(j>=i&&sum<=pre)
                {
                    sum+=x[i++];
                }
                a+=sum;
                pre=sum;
            }
            c++;
        }
        cout<<c<<" "<<a<<" "<<b<<endl;
    }

    return 0;
}



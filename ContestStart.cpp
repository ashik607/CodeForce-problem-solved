

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,t;
        cin>>n>>x>>t;
        long long a=t/x;
        long long ans=0;


        if(x>t)
        {
            cout<<0<<endl;
        }
        else if(x==t)
        {
            cout<<n-1<<endl;
        }
        else if(a>=n)
        {
            ans=(n*(n-1))/2;
            cout<<ans<<endl;
        }

        else{
            long long z=n-a;
            ans+=z*a;
            ans+=(a*(a-1))/2;

            cout<<ans<<endl;
        }

    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int ans=0;
        long long x;
        for(int i=0; i<n; i++)
        {
           cin>>x;
           long long a=sqrt(x);
           if(a*a!=x)
           {
            ans=1;
           }
        }
        if(ans==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
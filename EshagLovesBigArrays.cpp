


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>> t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long avr=0;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
         avr=a[0];
        long long cnt=1;
         for(int i=1; i<n; i++)
         {
            if(avr==a[i])
            cnt++;
            else 
            break;
         }
         cout<<n-cnt<<endl;
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
int main()

    
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n*=2;
        int x;
        int even=0;
        int odd=0;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x%2==0)
            {
                even ++;
            }
            else{
                odd++;
            }
        }

        if(odd==even)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}





#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
 void bah()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
  
}


void bal()
{
    int n;
        cin>>n;
        string s;
        cin>>s;
        char ans[n+3][n+3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[i][j]='=';
                if(i==j)ans[i][j]='X';
            }
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='2')v.push_back(i);
 
        }
        if(v.size()==1 || v.size()==2)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<v.size();i++)
            {
                int v1,v2;
                v1=i;
                v2=i+1;
                if(v2==v.size())v2=0;
                v1=v[v1];
                v2=v[v2];
                ans[v1][v2]='+';
                ans[v2][v1]='-';
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)cout<<ans[i][j];
                cout<<endl;
            }
        }
    }

   int main()
   {
    bah();

    int t;
    cin>>t;
    while(t--)
    {
        bal();
    }
    return 0;
   }


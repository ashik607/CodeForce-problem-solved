

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int x;
//         int mx = INT_MIN, ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> x;
//             mx = max(mx, x);
//             if (x < 0)
//                 ans = 1;
//         }
//         if (ans == 1)
//             cout << "NO" << endl;
//         else
//         {
//             cout << "YES" << endl;
//             cout << mx + 1 << endl;
//             for (int i = 0; i <= mx; i++)
//                 cout << i << " ";
//             cout << endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if((n&(n-1))==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}


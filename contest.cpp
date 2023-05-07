

// A number

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif

//    int t;
//    cin >> t;
//    while (t--)
//    {
//       int a, b, c;
//       cin >> a >> b >> c;

//       if (a + b == c)
//       {
//          cout << "+" << endl;
//       }

//       else

//          cout << "-" << endl;
//    }
//    return 0;
// }

// B number

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;
// int main()
// {
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif

//    int t;
//    cin >> t;
//    while (t--)
//    {
//       ll n;
//       cin >> n;
//       vector<ll> v(n);
//       ll ev = 0, od = 0;
//       for (ll i = 0; i < n; i++)
//       {
//          cin >> v[i];

//          if (v[i] % 2 == 0)
//          {
//             ev = ev + v[i];
//          }
//          else
//          {
//             od = od + v[i];
//          }
//       }

//       if (ev > od)
//       {
//          cout << "YES" << endl;
//       }
//       else
//       {
//          cout << "NO" << endl;
//       }
//    }
// }

// D number

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;
// int main()
// {
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif

//    ll t;
//    cin >> t;
//    while (t--)
//    {
//       ll n, p;
//       cin >> n >> p;
//       vector<ll> v(n), pre(n, 0);
//       ll sum = 0;
//       for (ll i = 0; i < n; i++)
//       {
//          cin >> v[i];
//          sum = sum + v[i];
//       }

//       pre[0] = v[0];
//       for (ll i = 1; i < n; i++)
//       {
//          pre[i] = v[i] + pre[i - 1];
//       }

//       while (p--)
//       {
//          ll l, r, k;
//          cin >> l >> r >> k;
//          ll ss = pre[r - 1] - (pre[l - 1] - v[l - 1]);
//          ll jsm = sum - ss + (r - l + 1) * k;

//          if (jsm % 2)
//          {
//             cout << "YES" << endl;
//          }
//          else
//          {
//             cout << "NO" << endl;
//          }
//       }
//    }
// }

// C number

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;
//  void bah()
// {
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif

// }
//   void gud()
//   {
//     ll n;
//     cin>>n;
//     string str;
//     cin>>str;
//     ll sub[30];
//     for(ll i=0; i<30; ++i)
//     {
//       sub[i]= -1;
//     }

//     for(ll i=0; i<n; ++i)
//     {
//       ll lik;
//       lik =str[i] -'a';

//       if((i%2 == sub[lik]) or sub[lik]==-1)
//       {
//          sub[lik]= i%2;
//       }

//       else{

//          cout<<"NO"<<endl;
//          return;
//       }
//     }

//     cout<<"YES"<<endl;

//   }

//   int main()
//   {
//    bah();
//    int t;
//    cin>>t;
//    while(t--)
//   {
//    gud();
//   }
//   return 0;
//   }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;
//  void bah()
// {
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif
// }

//  void bal()
//  {
//   string s;
//   cin>>s;
//   map<char,ll>ms;
//   for(auto x: s) ms[x]++;
//   ll sa=ms.size();
//   if(sa==4 or sa==3)
//   {
//     cout<<4<<endl;
//   }
//   else if(sa==1)
//   {
//     cout<<-1<<endl;
//   }
//   else
//   {
//     for(auto x:ms)
//     {
//       if(x.second==3)
//       {
//         cout<<6<<endl;
//         return;
//       }
//     }
//     cout<<4<<endl;
//   }

//  }

//  int main()
//  {
//   bah();
//   ll t;
//   cin>>t;
//   while(t--)
//   {
//     bal();
//   }
//   return 0;
//  }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;
//  void bah()
// {
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
// #endif
// }

// void wow()
// {
//   ll n;
//   cin>>n;
//   ll pip= sqrt(n-1);
//   cout<<pip<<endl;
// }

// int main()
// {
//   bah();
//   ll t;
//   cin>>t;
//   while(t--)
//   {
//     wow();
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//   #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//  #endif
//   int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         // Initialize the array with alternating positive and negative numbers
//         vector<int> a(n, -1);
//         for (int i = 0; i < n; i += 2) {
//             a[i] = i+1;
//         }

//         // Adjust the signs to create k subarrays with positive sums
//         for (int i = 0; i < n-1 && k > 0; i++) {
//             if (a[i] < 0 && a[i+1] > 0) {
//                 a[i] = -a[i];
//                 k--;
//             }
//         }

//         // Print the array
//         for (int x : a) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;

// void bah()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
// void wow()
// {
//     ll n;
//     cin >> n;
//     vector<ll> v[n];
//     for (ll i = 0; i < n; i++)
//     {
//         ll x;
//         cin >> x;
//         for (ll j = 0; j < x; j++)
//         {
//             ll y;
//             cin >> y;
//             v[i].push_back(y);
//         }
//     }

//     bool a[50000 +5]= {false};
//     vector<ll>ans;

//     for(ll i=n-1; i>=0; i--)
//     {
//         bool found= false;
//         for(auto l:v[i])
//         {
//             if(!found && ! a[l])
//             {
//                 found= true;
//                 ans.push_back(l);
//                 a[l]=true;
//             }
//             else{
//                 a[l]=true;
//             }
//         }
//     }

//     if(ans.size()==n)

//     {
//         reverse(ans.begin(),ans.end());
//         for(auto l.ans)
//         {
//             cout<<1<<" ";
//         }
//     }
//     else{
//         cout<<"-1"<<endl;;
//     }

// }

// int main()
// {
//     bah();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         wow();
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void bah()
//  {

//  #ifndef ONLINE_JUDGE
//      freopen("input.txt", "r", stdin);
//      freopen("output.txt", "w", stdout);
//  #endif
//  }
//  bool is_beautiful(vector<int>& a) {
//     int n = a.size();
//     bool good_subsequence_exists = false;
//     for (int i = 0; i < n; i++) {
//         if (a[i] == i+1) {
//             good_subsequence_exists = true;
//             break;  // found good subsequence of length 1
//         }
//     }
//     if (!good_subsequence_exists) {
//         set<int> s(a.begin(), a.end());
//         if (s.size() < n) {
//             return true;  // found good subsequence of length 2 or more
//         } else {
//             return false;  // no good subsequence found
//         }
//     } else {
//         return true;  // found good subsequence of length 1
//     }
// }

// int main() {

//     bah();
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         if (is_beautiful(a)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;

// void wow()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

// void no()
// {
//  ll n;
//  cin>>n;
//  vector<ll>v(n);

// for(ll i=0; i<n; i++)

//     cin>>v[i];
//  for(ll i=1; i<=n; i++)
//  {
//     if(v[i-1]<=i)
//     {
//         cout<<"YES"<<endl;
//         return;
//     }
//  }
//  cout<<"NO"<<endl;

// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;

// void HI()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

// void BY()
// {
//     ll n;
//     cin >> n;
//     if (n % 2 == 0)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         ll ct = 40;
//         vector<ll> anss;
//         while (n != 1 && ct--)
//         {
//             if (((n + 1) / 2) % 2)
//             {
//                 n = (n +1) / 2;
//                 anss.push_back(1);
//             }
//             else
//             {
//                 n = (n - 1) / 2;
//                 anss.push_back(2);
//             }
//         }

//         if (ct < 0)
//         {
//             cout << -1 << endl;
//         }

//         else if (n == 1)
//         {
//             cout << anss.size() << endl;
//             reverse(anss.begin(), anss.end());
//             for (auto i : anss)
//                 cout << i << " ";
//             cout << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
// }

// int main()
// {
//     HI();
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         BY();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// void hlw() {

//     #ifndef ONLINE_JUDGE
//      freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

// }

// void hus()
// {
//     int n;
//     cin>>n;
//     if(n==15 || n==20 || n==21)
//     {
//         cout<<"NO"<<endl;
//     }

//     else{
//         cout<<"YES"<<endl;
//     }

// }

// int main()
// {
//     hlw();
//     hus();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef unsigned long long int llu;
// #define SIZE 1e6 + 2
// void HT()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
//  vector<ll>V;
// bool WOW(ll x, ll y, ll n)
// {
//  if(n==1)
//  return true;
//  if(min(y, V[n+1]- y+1)>V[n+1]-V[n])
//  return false;
//  y= min(y,V[n+1]-y+1);
//  return WOW(y,x,n-1);


// }


// int main()
// {
//     HT();


//     ll t,n,x1,y1,x2,y2;
//     cin >> t;
//     V.push_back(1);
//     V.push_back(1);
//     for(int i=0; i<46; i++)
//     V.push_back(V[i]+ V[i+1]);
//     while (t--)
//     {   
//         cin>>n>>x1>>y1;
//         if(WOW(x1,y1,n))
//         cout<<"YES"<<endl;
//         else
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// const int INF = 1e9;
// typedef long long ll;
// void HT()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }



// int main() {
//     HT();
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b;
//         cin >> a >> b;
//         queue<pair<int,int>> q;
//         map<pair<int,int>, int> dist;
//         q.push({0,0});
//         dist[{0,0}] = 0;
//         while (!q.empty()) {
//             auto [x, y] = q.front();
//             q.pop();
//             int d = dist[{x, y}];
//             if (x == a && y == b) {
//                 cout << d << endl;
//                 break;
//             }
//             int m = sqrt(d+1);
//             if (m*m == d+1) {
//                 if (dist.find({x+m, y}) == dist.end()) {
//                     q.push({x+m, y});
//                     dist[{x+m, y}] = d+1;
//                 }
//                 if (dist.find({x, y+m}) == dist.end()) {
//                     q.push({x, y+m});
//                     dist[{x, y+m}] = d+1;
//                 }
//             } else {
//                 if (dist.find({x, y+m}) == dist.end()) {
//                     q.push({x, y+m});
//                     dist[{x, y+m}] = d+1;
//                 }
//                 if (dist.find({x+m, y}) == dist.end()) {
//                     q.push({x+m, y});
//                     dist[{x+m, y}] = d+1;
//                 }
//                 if (dist.find({x+m+1, y+m+1}) == dist.end()) {
//                     q.push({x+m+1, y+m+1});
//                     dist[{x+m+1, y+m+1}] = d+1;
//                 }
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;



 

 #include <iostream>
#include <vector>

using namespace std;

int main() {

    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int q;
    cin >> q;

    while (q--) {
        int n, t;
        cin >> n >> t;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int ans = -1;
        int max_b = -1;
        for (int i = 0; i < n; i++) {
            int remaining_time = t - a[i];
            if (remaining_time < 0) {
                continue;
            }
            if (b[i] > max_b) {
                ans = i + 1;
                max_b = b[i];
            }
            for (int j = i + 1; j < n; j++) {
                remaining_time -= 1 + a[j-1];
                if (remaining_time < 0) {
                    break;
                }
                if (b[j] > max_b) {
                    ans = j + 1;
                    max_b = b[j];
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
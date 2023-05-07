

#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t = 1;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long a[26] = {0}, j = 0;
        for (long long i = 0; i < n; i++)
        {
            a[s[i] - 'A']++;
            if (a[s[i] - 'A'] > 1 && s[i - 1] != s[i])
            {
                j = 1;
                break;
            }
        }
        if (j == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
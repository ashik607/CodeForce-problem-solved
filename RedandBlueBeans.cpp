

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long r, b, d;
        cin >> r >> b >> d;
        long long x;
        if (d == 0)
        {
            if (r == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            continue;
        }

        else
        {

            long long rr = max(r, b);
            long long bb = min(r, b);
            d++;
            x = bb * d;

            if (x >= rr)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}
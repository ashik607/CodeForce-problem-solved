

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n = n * 2;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        int i = 0, j = n - 1;
        int cnt = 0;
        while (i <= j)
        {
            if (cnt % 2 == 0)
            {
                cout << a[j] << " ";
                j--;
            }
            else
            {
                cout << a[i] << " ";
                i++;
            }
            cnt++;
        }
        cout << endl;
    }
}
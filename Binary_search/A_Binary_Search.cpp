#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < k; i++)
    {
        int b;
        int l = 0;
        int r = n - 1;
        bool f = false;
        cin >> b;
        while (l <= r)
        {
            int m = (r + l) / 2;
            if (b == a[m])
            {
                f = true;
                break;
            }
            else if (b < a[m])
            {
                r = m - 1;
            }
            else if (b > a[m])
            {
                l = m + 1;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
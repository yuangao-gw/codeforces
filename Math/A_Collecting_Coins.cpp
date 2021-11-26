#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int max;
        max = a > b ? a : b;
        max = max > c ? max : c;
        int total = (max - a) + (max - b) + (max - c);
        if (total > n)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            if ((n - total) % 3 == 0)
            {
                cout << "YES"
                     << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
    }

    return 0;
}

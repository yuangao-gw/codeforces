#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, c;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> c;
        if (c % 3 == 0 || c % 7 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int r = c % 7;
            if (r % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}

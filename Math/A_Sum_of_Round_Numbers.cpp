#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0;
        int flag = 0;
        vector<int> res;
        while (n)
        {
            int x = n % 10;
            if (x != 0)
            {
                res.push_back(x * pow(10, flag));
                count++;
            }
            n = (n - x) / 10;
            flag++;
        }
        cout << count << "\n";
        for (size_t i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    do
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
        k--;
    } while (k > 0);
    cout << n << endl;
    return 0;
}

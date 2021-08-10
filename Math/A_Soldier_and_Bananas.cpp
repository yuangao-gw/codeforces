#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int k, n, w;
    int res = 0;
    cin >> k >> n >> w;
    for (size_t i = 0; i < w; i++)
    {
        res = res + k * (i + 1);
    }
    if (n - res < 0)
    {
        cout << abs(n - res) << endl;
    }
    else
        cout << 0 << endl;

    return 0;
}
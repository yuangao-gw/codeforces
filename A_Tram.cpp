#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, arr[1000][2], cnt = 0, res = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        if (cnt - arr[i][0] + arr[i][1] >= res)
        {
            res = cnt - arr[i][0] + arr[i][1];
        }
        cnt = cnt - arr[i][0] + arr[i][1];
    }
    cout << res << endl;
    return 0;
}

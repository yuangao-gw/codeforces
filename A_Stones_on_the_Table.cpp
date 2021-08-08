#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, cnt = 0;
    string s;
    cin >> n;
    cin >> s;
    for (size_t i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

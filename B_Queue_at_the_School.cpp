#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
    for (size_t i = 0; i < t; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout << s << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5)
    {
        cout << 1 << endl;
    }
    else
    {
        if (x % 5 == 0)
        {
            cout << x / 5 << endl;
        }
        else
            cout << x / 5 + 1 << endl;
    }

    return 0;
}

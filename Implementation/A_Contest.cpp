#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // max(3p/10, p-(pt/250))
    int p1 = max(3 * a / 10, a - a * c / 250);
    int p2 = max(3 * b / 10, b - b * d / 250);
    if (p1 > p2)
    {
        cout << "Misha"
             << "\n";
    }
    else if (p1 < p2)
    {
        cout << "Vasya"
             << "\n";
    }
    else
    {
        cout << "Tie"
             << "\n";
    }
    return 0;
}

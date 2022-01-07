#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> x(4);
    for (size_t i = 0; i < 4; i++)
    {
        int num;
        cin >> num;
        x.push_back(num);
    }
    sort(x.begin(), x.end(), greater<int>());
    int a = x[0]-x[1];
    int b = x[0]-x[2];
    int c = x[0]-a-b;
    cout << a <<" " << b << " " << c << "\n";
    return 0;
}

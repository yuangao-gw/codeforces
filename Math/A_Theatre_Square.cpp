#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long m,n,a;
    cin >> m >> n >> a;
    cout << (((m+a-1)/a) * ((n+a-1)/a)) << "\n";
    return 0;
}

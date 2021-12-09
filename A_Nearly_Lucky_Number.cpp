#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    long long n, r;
    std::cin >> n;
    int cnt = 0;
    while (n)
    {
        r = n % 10;
        n = n / 10;
        if (r == 4 || r == 7)
        {
            cnt++;
        }
    }
    if (cnt == 4 || cnt == 7)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

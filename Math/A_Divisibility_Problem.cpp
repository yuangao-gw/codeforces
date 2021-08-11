#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    long long a, b;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        long long res;
        if (a % b == 0)
        {
            std::cout << 0 << std::endl;
        }
        else
        {
            res = b - (a % b);
            std::cout << res << std::endl;
        }
    }
    return 0;
}

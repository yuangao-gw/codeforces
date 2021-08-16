#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int h, m;
        std::cin >> h >> m;
        int res = 1440 - (h * 60 + m);
        std::cout << res << std::endl;
    }

    return 0;
}

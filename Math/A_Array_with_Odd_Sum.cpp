#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int t, n, a;
    std::cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        std::cin >> n;
        int o = 0,e = 0;
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> a;
            if (a%2 == 1)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        if (o == 0 || (e == 0 && n%2 == 0))
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }
    return 0;
}

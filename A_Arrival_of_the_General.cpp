#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, max = -1, min = -1, index_max, index_min, a;
    std::cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        std::cin >> a;
        if (a > max || max == -1)
        {
            max = a;
            index_max = i;
        }
        if (a <= min || min == -1)
        {
            min = a;
            index_min = i;
        }
    }
    if (index_max < index_min)
    {
        std::cout << ((index_max - 1) + (n - index_min)) << std::endl;
    }
    else
    {
        std::cout << ((index_max - 1) + (n - index_min) - 1) << std::endl;
    }
    return 0;
}

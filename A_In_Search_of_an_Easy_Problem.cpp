#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, k;
    bool f = true;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> k;
        if (k == 1)
        {
            f = false;
            break;
        }
    }
    if (f)
    {
        std::cout << "EASY" << std::endl;
    }
    else
    {
        std::cout << "HARD" << std::endl;
    }

    return 0;
}

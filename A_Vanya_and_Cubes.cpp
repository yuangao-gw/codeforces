#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, sum = 0, cnt = 0, i = 1;
    std::cin >> n;
    // 1 1
    // 3 2
    // 6 3
    // 10 4
    if (n == 1)
    {
        std::cout << 1 << std::endl;
    }

    else
    {
        do
        {
            cnt = i + cnt;   // 1 3 6 10 15
            sum = sum + cnt; // 1 4 10 20 35
            i++; // 2 3 4 5 6
        } while (sum <= n);

        std::cout << i - 2 << std::endl;
    }
    return 0;
}

#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    long long n;
    std::cin >> n;
    if (n % 2 == 0)
    {
        n /= 2;
    }
    else
    {
        n = (n - 1) / 2 - n;
    }
    std::cout << n << std::endl;
    return 0;
}

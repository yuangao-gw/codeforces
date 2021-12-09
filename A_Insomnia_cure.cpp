#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int k, l, m, n, d, cnt = 0;
    std::cin >> k >> l >> m >> n >> d;
    for (size_t i = 0; i < d; i++)
    {
        if ((i+1) % k == 0 || (i+1) % l == 0 || (i+1) % m == 0 || (i+1) % n == 0)
        {
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
    return 0;
}

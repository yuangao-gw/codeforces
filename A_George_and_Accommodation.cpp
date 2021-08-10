#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, p, q, cnt = 0;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> p >> q;
        if (q-p >= 2)
        {
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
    return 0;
}

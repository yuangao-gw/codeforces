#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, h, cnt = 0;
    std::cin >> n >> h;
    std::vector<int> a(n);
    for (size_t i = 0; i < a.size(); i++)
    {
        std::cin >> a[i];
    }
    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] > h)
        {
            cnt += 2;
        }
        else if (a[i] <= h)
        {
            cnt += 1;
        }
    }
    std::cout << cnt << std::endl;

    return 0;
}

#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, x, p, q;
    std::cin >> n >> p;
    std::set<int> s;
    for (size_t i = 0; i < p; i++)
    {
        std::cin >> x;
        s.insert(x);
    }
    std::cin >> q;
    for (size_t i = 0; i < q; i++)
    {
        std::cin >> x;
        s.insert(x);
    }
    if (s.size() == n)
    {
        std::cout << "I become the guy." << std::endl;
    }
    else
    {
        std::cout << "Oh, my keyboard!" << std::endl;
    }
    return 0;
}

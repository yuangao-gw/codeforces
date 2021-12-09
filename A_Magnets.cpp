#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, m, f = -1, cnt = 0;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> m;
        if (f != m)
        {
            f = m;
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
    
    return 0;
}

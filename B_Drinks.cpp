#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    double n, p, r = 0;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> p;
        p =(p/100);
        r = r+p;
    }
    std::cout << std::fixed << std::setprecision(12) << (r/n)*100 << std::endl;
    return 0;
}

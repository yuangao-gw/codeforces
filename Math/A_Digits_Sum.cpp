#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, x;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> x;
        std::cout << (x+1)/10 << std::endl;
    }  
    return 0;
}

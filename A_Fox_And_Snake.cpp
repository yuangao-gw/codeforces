#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, m;
    bool flag = true;
    std::cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (size_t j = 0; j < m; j++)
            {
                std::cout << "#";
            }
            std::cout << std::endl;
        }
        else
        {
            if (flag == true)
            {
                for (size_t j = 0; j < m - 1; j++)
                {
                    std::cout << ".";
                }
                std::cout << "#" << std::endl;
                flag = false;
            }
            else
            {
                std::cout << "#";
                for (size_t j = 0; j < m - 1; j++)
                {
                    std::cout << ".";
                }
                std::cout << std::endl;
                flag = true;
            } 
        }
    }
    return 0;
}

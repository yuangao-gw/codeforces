#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            std::cout << "I hate" << " ";
            if (i != n-1)
            {
                std::cout << "that" << " ";
            }
            else{
                std::cout << "it" << " ";
            }
            
        }
        else if (i%2 == 1)
        {
            std::cout << "I love" << " ";
            if (i != n-1)
            {
                std::cout << "that" << " ";
            }
            else{
                std::cout << "it" << " ";
            }
            
        }
    }
    
    return 0;
}

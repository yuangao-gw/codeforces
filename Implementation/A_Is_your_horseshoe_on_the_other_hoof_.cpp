#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int p = 0;
    std::vector<int> v(4);
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cin >>v[i];
    }
    std::sort(v.begin(), v.end());
    for (size_t i = 0; i < v.size()-1; i++)
    {
        if (v[i] == v[i+1])
        {
            p++;
        }
        
    }
    std::cout << p << std::endl;
    
    return 0;
}

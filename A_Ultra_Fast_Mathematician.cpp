#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    std::string s1, s2;
    std::cin >>s1>>s2;
    for (size_t i = 0; i < s1.length(); i++)
    {
        std::cout << ((int)s1[i]^(int)s2[i]);
    }
    
    return 0;
}

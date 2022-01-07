#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    std::string s;
    std::getline(std::cin, s);
    std::set<char> se;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            se.insert(s[i]);
        }
    }
    std::cout << se.size() << std::endl;
    return 0;
}

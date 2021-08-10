#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    bool f = true;
    for (size_t i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[s2.length() - 1 - i])
        {
            f = false;
        }
    }
    if (f)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

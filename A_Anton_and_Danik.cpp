#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int cnt_a = 0, cnt_d = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            cnt_a++;
        }
        else if (s[i] == 'D')
        {
            cnt_d++;
        }
    }
    if (cnt_a > cnt_d)
    {
        std::cout << "Anton" << std::endl;
    }
    else if (cnt_a < cnt_d)
    {
        std::cout << "Danik" << std::endl;
    }
    else
    {
        std::cout << "Friendship" << std::endl;
    }

    return 0;
}

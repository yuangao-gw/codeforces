#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    locale loc;
    int cnt_up = 0, cnt_low = 0;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt_low++;
        }

        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cnt_up++;
        }
    }
    if (cnt_up > cnt_low)
    {
        for (std::string::size_type i = 0; i < s.length(); ++i)
            cout << toupper(s[i], loc);
    }
    else
    {
        for (std::string::size_type i = 0; i < s.length(); ++i)
            cout << tolower(s[i], loc);
    }

    return 0;
}

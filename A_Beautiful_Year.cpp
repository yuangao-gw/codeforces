#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int y;
    int a, b, c, d;
    std::cin >> y;
    while (true)
    {
        y += 1;
        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    std::cout << y << std::endl;

    return 0;
}

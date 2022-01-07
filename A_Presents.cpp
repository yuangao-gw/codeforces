#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n, p;
    std::cin >> n;
    std::vector<int> q(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> p;
        q[p-1] = i+1;
    }
    for (size_t i = 0; i < q.size(); i++)
    {
        std::cout << q[i] << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int input, filter = 0;
    float sum, cnt;
    std::vector<int> arr;
    while (std::cin >> input)
    {
        sum += input;
        arr.push_back(input);
    }
    cnt = sum - 1;
    while (sum / 2 < cnt)
    {
        std::sort(arr.begin(), arr.end(), std::greater<int>());
        arr[0] /=2;
        filter++;
        cnt = std::accumulate(arr.begin(), arr.end(), 0);
    }
    std::cout << filter << std::endl;
    return 0;
}

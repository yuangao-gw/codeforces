#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, k, arr[100], count = 0;
    cin >> n >> k;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int score = arr[k-1];
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] >= score && arr[i] > 0)
        {
            count++;
        }
        
    }
    cout << count << endl;
     
    return 0;
}

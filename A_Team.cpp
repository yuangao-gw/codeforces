#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, arr[1000][3];
    int solution = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        int count = 0;
        for (size_t j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)        
            {
                count++;
            }
            
        }
        if (count >= 2)
        {
            solution++;
        }
    }
    cout << solution << endl; 
    return 0;
}

#include<cstdlib>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5][5];
    int res;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                res = abs(int(i-2)) + abs(int(j-2));
            } 
        }
    }
    cout << res << endl;
    return 0;
}

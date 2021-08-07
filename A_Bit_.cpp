#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, res = 0;
    char x[150][3];
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin >> x[i][j];
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        if (x[i][0] == 'X')
        {
            if (x[i][1] == '-')
            {
                res--;
            }
            else
            {
                res++;
            }
            
        }
        else if (x[i][0] == '+') 
        {
            res++;
        }
        else
        {
            res--;
        }
        
    }
    cout << res << endl;
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int m, n;
    int res = 0;
    cin >> m >> n;
    vector<string> matrix(m);
    for (size_t i = 0; i < matrix.size(); i++)
    {
        cin >> matrix[i];
    }
    for (size_t i = 0; i < m; i++)
    {
        bool wasBest = false;
        for (size_t j = 0; j < matrix[i].length(); j++)
        {
            bool isBest = true;
            for (size_t k = 0; k < m; k++)
            {
                if ((int)matrix[i][j] < (int)matrix[k][j])
                {
                    isBest = false;
                }
            }
            if (isBest)
            {
                wasBest = true;
            }   
        }
        if (wasBest)
        {
            res++;
        }   
    }
    cout << res << endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string a, b;
    cin >> a >> b;
    for (size_t i = 0; i < a.length(); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
    }
    for (size_t i = 0; i < b.length(); i++)
    {
        if(b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
    }

    int res = 0;
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a[i] > b[i])
        {
            res = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            res = -1;
            break;
        }
    }
    cout << res << endl;
    
}

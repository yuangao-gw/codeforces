#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    char arr[100];
    int j = 0;
    cin >> str;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] != '+')
        {
            arr[j] = str[i];
            j++;
        }
        
    }
    sort(arr, arr+j);
    for (size_t i = 0; i < j; i++)
    {
        if (i == j-1)
        {
            cout << arr[i] << endl;
        }
        else cout << arr[i] << '+';
    }
    
    
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    string str[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = str[i].length() - 2;
        for (size_t j = 0; j < str[i].length(); j++)
        {
            if (str[i].length() > 10)
            {
                cout << str[i][0] << count << str[i][str[i].length()-1] << endl;
                break;
            }
            else {
                cout << str[i] << endl;
                break;
            }
        }
    }
    
    
    return 0;
}

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;
    cout << s << endl;
    return 0;
}

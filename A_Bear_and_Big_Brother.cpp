#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, i = 0;
    cin >> a >> b;
    do
    {
        a = a * 3; 
        b = b * 2; 
        ++i;
    } while (a <= b);
    cout << i << endl;
    return 0;
}

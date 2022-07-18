// Solution to wierd algorithm problem

#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t != 1)
    {
        cout << t << " ";
        t % 2 == 0 ? t = t / 2 : t = (t * 3) + 1;
    }
    cout << 1 << "\n";
    return 0;
}
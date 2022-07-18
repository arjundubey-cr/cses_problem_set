#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int length = s.length();
    int longest_length = -1;
    int current_maximum = 1;
    for (int i = 0; i < length; i++)
    {
        if (s[i] == s[i + 1])
        {
            current_maximum++;
        }
        else
        {
            current_maximum = 1;
        }
        if (current_maximum > longest_length)
        {
            longest_length = current_maximum;
        }
    }
    cout << longest_length << "\n";
}
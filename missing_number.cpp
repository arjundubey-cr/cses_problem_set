// Program to find the missing number from the lot
#include <iostream>
using namespace std;

void solve();

// Calculate the sum of numbers from 1 to N
long long calculate_sum_1ton(long long int number);

int main()
{
    solve();
}
void solve()
{
    long long int n, total_sum = 0;
    cin >> n;
    long long int sum_1toN = calculate_sum_1ton(n);
    n--;
    while (n--)
    {
        int x;
        cin >> x;
        total_sum += x;
    }
    cout << sum_1toN - total_sum << "\n";
}
long long calculate_sum_1ton(long long number)
{
    long long int sum = (number * (number + 1)) / 2;
    return sum;
}
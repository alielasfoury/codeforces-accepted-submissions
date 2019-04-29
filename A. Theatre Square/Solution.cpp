#include <iostream>

using namespace std;

int main()
{
    long int n, m, a, Limit;
    long long x, y;
    Limit = 1000000000;
    cin >> n >> m >> a;
    if ((n >= 1 && n <= Limit) && (m >= 1 && m <= Limit) && (a >= 1 && a <= Limit))
    {
        if ((n % a) != 0)
        {
            x = n / a;
            x += 1;
        }
        else
        {
            x = n / a;
        }
        if ((m % a) != 0)
        {
            y = m / a;
            y += 1;
        }
        else
        {
            y = m / a;
        }
        cout << x*y;
    }
    else 
    {
        cout << "output off limit" << endl;
    }
}
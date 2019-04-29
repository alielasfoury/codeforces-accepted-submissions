#include<iostream>
using namespace std;
int main()
{
    int first, recyc, hrs = 0,c=0;
    cin >> first >> recyc;
    if (recyc > first)
    {
        hrs = first;
    }
    else if (first == recyc)
    {
        hrs = first + 1;
    }
    else
    {
        hrs = first;
        while (first>=recyc)
        {
            c = first % recyc;
            first = first / recyc;
            hrs += first;
            first += c;
        }
    }
    cout << hrs;
}
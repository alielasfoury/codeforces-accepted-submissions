#include <iostream>

using namespace std;

int main()
{
    int NumberOfProblems, Problems = 0, P, V, T, View = 0;
    cin >> NumberOfProblems;
    for(int i=0; i < NumberOfProblems ; i++)
    {
        cin >> P >> V >> T;
        if( P == 1 ) View++;
        if( V == 1 ) View++;
        if( T == 1 ) View++;
        if( View >= 2 ) Problems++;
        View = 0;
    }
    cout << Problems << endl;
    return 0;
}
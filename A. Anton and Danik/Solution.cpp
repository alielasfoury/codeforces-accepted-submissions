#include <iostream>

using namespace std;

int main()
{
    int Games,A=0,D=0;
    cin>> Games;
    char GamesStatus[Games];
    cin>> GamesStatus;
    for(int i=0; i<Games ; i++)
    {
        if(GamesStatus[i]=='A')
            A++;
        else if (GamesStatus[i]=='D')
            D++;
    }
    if(A>D)
        cout<<"Anton";
    else if(D>A)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}
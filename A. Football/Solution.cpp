#include <iostream>
#include <string>
using namespace std;

int main()
{
    string players;
    char counter, temp;

    cin>>players;

    if (players.length()==2)
    {
        if ( ( players[0]==0 && players[1] == 0 ) || ( players[0]==1 && players[1] == 1 ) )
        {
            goto error;
        }
    }

    if(players.length()>=2 && players.length()<=100)
    {
            temp = players[0];
            counter = 1;

            for(int i=1; i<players.length() ; i++)
            {
                if(players[i] == temp)
                {
                    counter+=1;
                }
                else
                {
                    temp = players[i];
                    counter = 1;
                }

                if (counter == 7)
                {
                    cout<<"YES";
                    break;
                }
                else if (players.length()== i+1)
                {
                    cout<<"NO";
                }
            }
        }
error:    return 0;
}
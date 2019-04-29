#include<iostream>
using namespace std;

int main()
{
    int FriendsNumber, FenceHeight, RoadWidth=0;
    cin>>FriendsNumber;
    cin>>FenceHeight;
    int PersonHeight[FriendsNumber], PersonWidth[FriendsNumber];
    for(int i = 0; i < FriendsNumber; i++)
    {
        cin>>PersonHeight[i];
   }

    for(int i = 0; i < FriendsNumber; i++)
    {
        if(  PersonHeight[i] > FenceHeight )
        {
            PersonWidth[i] = 2;
        }
        else
        {
            PersonWidth[i] = 1;
        }
        RoadWidth += PersonWidth[i];
    }
    cout<<RoadWidth;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string word[100];
    error : cin >> n;
    if (n >= 1 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> word[i];
        }
    }
    else
        goto error;
    
    for (int i = 0; i < n; i++)
    {
        if (word[i].length() > 10)
        {
            cout << word[i].at(0);
            cout << word[i].length() - 2;
            cout<< word[i].at(word[i].length()-1) << endl;
        }
        else
            cout << word[i]<<endl;
    }
    
}
#include <iostream>
using namespace std;
int percentageLetter(string s, char letter)
{
    double count = 0;
    for (char c : s)
    {
        if (c == letter)
        {
            count++;
        }
    }
    cout << count / s.size();
    return count / s.size() * 100;
}
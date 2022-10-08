#include <iostream>
using namespace std;
string interpret(string command)
{
    string ans = "";
    for (int i = 0; i < command.size(); i++)
    {
        if (command[i] == 'G')
            ans += 'G';
        else if (command[i] == '(' && command[i + 1] == ')')
            ans += 'o';
        else if (command[i] == '(')
        {
            ans += command[i + 1];
            ans += command[i + 2];
            i = i + 2;
        }
    }
    return ans;
}
#include <vector>
#include <iostream>
using namespace std;
bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string str1 = "";
    string str2 = "";
    for (int i = 0; i < word1.size(); i++)
    {
        for (char c : word1[i])
        {
            str1 += c;
        }
    }
    for (int i = 0; i < word2.size(); i++)
    {
        for (char c : word2[i])
        {
            str2 += c;
        }
    }
    return str1 == str2;
}
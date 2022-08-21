#include <iostream>
#include <map>
#include <iterator>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    map<char, char> myMap;
    map<char, char>::iterator itr;
    int i = 0;
    for (i = 0; i < s.size(); i++)
    {
        bool flage = true;
        for (itr = myMap.begin(); itr != myMap.end(); ++itr)
        {
            if (itr->second == t[i] && itr->first != s[i])
            {
                myMap[s[i]] = ' ';
                flage = false;
            }
        }
        if (flage)
        {
            myMap[s[i]] = t[i];
        }
    }
    string str = "";
    for (auto c : s)
    {
        str += myMap[c];
    }
    if (str != t)
    {
        return false;
    }

    return true;
}
int main()
{
    string s = "egg";
    string t = "add";
    // string s = "foo";
    // string t = "bar";
    cout << isIsomorphic(s, t) << endl;
    return 0;
}
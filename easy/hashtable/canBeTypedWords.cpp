#include <vector>
// #include <unordered_map>
#include <iostream>
#include <unordered_set>
using namespace std;
int canBeTypedWords(string text, string brokenLetters)
{
    unordered_set<int> s;
    vector<string> words;
    int ans = 0;
    for (char c : brokenLetters)
    {
        s.insert(c);
    }
    string temp = "";
    for (char c : text)
    {
        temp += c;
        if (c == ' ')
        {
            words.push_back(temp);
            temp = "";
        }
    }
    words.push_back(temp);
    for (string str : words)
    {
        int i;
        for (i = 0; i < str.size(); i++)
        {
            if (s.find(str[i]) != s.end())
            {
                break;
            }
        }
        if (i == str.size())
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    cout << canBeTypedWords("leet code", "e");
}
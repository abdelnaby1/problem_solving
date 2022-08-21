#include <iostream>
#include <vector>
using namespace std;
int numMatchingSubseq(string s, vector<string> &words)
{

    int i;
    int j;
    int count = 0;
    for (int k = 0; k < words.size(); k++)
    {
        i = 0;
        j = 0;
        while (i < s.size())
        {
            if (words[k][j] == s[i])
            {
                j++;
            }
            i++;
        }
        if (j == words[k].size())
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s = "abcde";
    vector<string> words = {"a", "bb", "acd", "ace"};
    cout << numMatchingSubseq(s, words) << endl;
    return 0;
}
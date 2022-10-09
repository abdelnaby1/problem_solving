#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int uniqueMorseRepresentations(vector<string> &words)
{
    unordered_set<string> set;
    vector<string> MORSE{".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
                         "....", "..", ".---", "-.-", ".-..", "--", "-.",
                         "---", ".--.", "--.-", ".-.", "...", "-", "..-",
                         "...-", ".--", "-..-", "-.--", "--.."};
    for (string w : words)
    {
        string temp = "";
        for (int i = 0; i < w.size(); i++)
        {
            temp += MORSE[w[i] - 'a'];
        }
        set.insert(temp);
    }
    return set.size();
}
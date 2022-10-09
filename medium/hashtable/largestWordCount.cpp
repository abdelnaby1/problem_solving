#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    static bool cmp(const pair<int, string> &a, const pair<int, string> &b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first > b.first;
    }
    int countWords(string s)
    {
        int count = 0;
        for (char c : s)
        {
            if (c == ' ')
            {
                count++;
            }
        }
        return count + 1;
    }
    string largestWordCount(vector<string> &messages, vector<string> &senders)
    {
        unordered_map<string, int> map;
        vector<pair<int, string>> vect;
        // string ans;
        for (int i = 0; i < messages.size(); i++)
        {
            map[senders[i]] += countWords(messages[i]);
        }
        unordered_map<string, int>::iterator itr;
        for (itr = map.begin(); itr != map.end(); itr++)
        {
            vect.push_back({itr->second, itr->first});
        }
        sort(vect.begin(), vect.end(), cmp);
        return vect[0].second;
    }
};

int main()
{
    vector<string> messages{"How is leetcode for everyone", "Leetcode is useful for practice"};
    vector<string> senders{"Bob", "Charlie"};
    Solution sol;
    cout << sol.largestWordCount(messages, senders);
}
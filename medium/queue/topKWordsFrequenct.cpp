#include <vector>
#include <queue>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    static bool cmp(const pair<int, string> &a, const pair<int, string> &b)
    {
        if (a.first == b.first)
        {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> map;
        priority_queue<pair<int, string>> pq;
        vector<pair<int, string>> vect;
        vector<string> ans(k);
        for (string word : words)
        {
            map[word]++;
        }
        unordered_map<string, int>::iterator itr;
        for (itr = map.begin(); itr != map.end(); itr++)
        {
            pq.push({itr->second, itr->first});
        }

        // for (int i = 0; i < pq.size(); i++)
        while (!pq.empty())
        {
            vect.push_back(pq.top());
            pq.pop();
        }
        sort(vect.begin(), vect.end(), cmp);
        for (int i = 0; i < k; i++)
        {
            ans[i] = vect[i].second;
        }

        return ans;
    }
};
int main()
{
    vector<string> words = {"i",
                            "love",
                            "leetcode",
                            "i",
                            "love",
                            "coding"};
    Solution sol;

    vector<string> res = sol.topKFrequent(words, 2);
    for (string s : res)
    {
        cout << s << " ";
    }
}
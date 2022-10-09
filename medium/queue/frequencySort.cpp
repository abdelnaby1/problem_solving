#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;
string frequencySort(string s)
{
    unordered_map<char, int> map;
    priority_queue<pair<int, char>> pq;
    for (char c : s)
    {
        map[c]++;
    }
    unordered_map<char, int>::iterator itr;
    for (itr = map.begin(); itr != map.end(); itr++)
    {
        pq.push({itr->second, itr->first});
    }
    string ans = "";
    while (!pq.empty())
    {
        int count = pq.top().first;
        char ch = pq.top().second;
        while (count > 0)
        {
            ans += ch;
            count--;
        }
        pq.pop();
    }
    return ans;
}
int main()
{
    string s = "Aabb";
    cout << frequencySort(s);
}
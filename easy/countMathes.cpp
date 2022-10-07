#include <vector>
#include <iostream>
using namespace std;
int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int count = 0;
    for (auto item : items)
    {
        if ((ruleKey == "type" && item[0] == ruleValue) || (ruleKey == "color" && ruleValue == item[1]) || (ruleKey == "name" && ruleValue == item[2]))
        {
            count++;
        }
    }

    return count;
}
#include <unordered_map>
#include <iostream>
using namespace std;
bool digitCount(string num)
{
    unordered_map<int, int> map;
    for (int i = 0; i < num.size(); i++)
    {
        // map[i] = (int)num[i] - 48;
        map[(int)num[i] - 48]++;
    }
    for (int i = 0; i < num.size(); i++)
    {
        if (map[i] != (int)num[i] - 48)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout << digitCount("1210");
}
#include <vector>
#include <algorithm>
using namespace std;
int countBits(int num)
{
    int count = 0;
    while (num)
    {
        count += num & 1;
        num = num >> 1;
    }
    return count;
}
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second < b.second)
    {
        return true;
    }
    else if (a.second > b.second)
    {
        return false;
    }
    else
    {
        return a.first < b.first;
    }
}
vector<int> sortByBits(vector<int> &arr)
{
    vector<pair<int, int>> vect;
    for (int i = 0; i < arr.size(); i++)
    {
        int count = countBits(arr[i]);
        vect.push_back({arr[i], count});
    }
    sort(vect.begin(), vect.end(), cmp);
    for (int i = 0; i < vect.size(); i++)
    {
        arr[i] = vect[i].first;
    }
    return arr;
}
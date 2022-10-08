#include <vector>
#include <unordered_map>
using namespace std;
bool checkIfExist(vector<int> &arr)
{
    int count = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        map[2 * arr[i]] = i;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 2)
            return true;
        auto itr = map.find(2 * arr[i]);
        if (itr != map.end())
        {
            if (itr->second != i)
            {
                count++;
            }
        }
    }
    if (count >= 2)
        return true;
    return false;
}

int main()
{
    vector<int> nums = {10, 2, 5, 3};
    checkIfExist(nums);
}
#include "iostream";
#include "vector";
#include "hashtable.h"
#include <iterator>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> nums1, vector<int> nums2)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums1.size(); i++)
        {
            hash.insert({nums1[i], 1});
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            std::unordered_map<int, int>::iterator it = hash.find(nums2[i]);

            if (it != hash.end() && it->second < 2)
            {
                it->second++;
            }
        }
        vector<int> result;

        for (auto it = hash.begin(); it != hash.end(); it++)
        {
            if (it->second > 1)
            {
                result.push_back(it->first);
            }
        }

        return result;
    }
};
int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {4, 9, 4, 8, 4};
    Solution sol;
    vector<int> result = sol.intersect(nums1, nums2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}
// for (int i = 0; i < nums1.size(); i++)
// {
//     int j = 0;
//     while (j < nums2.size())
//     {
//         if (nums2[i] != -1 && nums1[i] == nums2[j])
//         {
//             result.push_back(nums1[i]);
//             nums2[i] = -1;
//         }
//         j++;
//     }
// }
#include <vector>
#include <stack>
#include <unordered_map>
#include <iostream>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    stack<int> st;
    unordered_map<int, int> map;
    // vector<int> ans(nums1.size());
    for (int i = 0; i < nums2.size(); i++)
    {
        while (!st.empty() && st.top() <= nums2[i])
        {
            map[st.top()] = nums2[i];
            st.pop();
        }
        st.push(nums2[i]);
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        if (map[nums1[i]])
        {
            nums1[i] = map[nums1[i]];
        }
        else
        {
            nums1[i] = -1;
        }
    }
    return nums1;
}
int main()
{
    vector<int> nums1 = {2, 4};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> ans = nextGreaterElement(nums1, nums2);
    for (int num : ans)
    {
        cout << num << " ";
    }
}
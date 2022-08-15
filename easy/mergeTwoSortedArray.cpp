#include "iostream";
using namespace std;
#include "vector";
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int i = 0;
    int j = 0;
    int k;
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            i++;
        }
        else
        {
            k = m + n - 1;
            while (k > i)
            {
                nums1[k] = nums1[k - 1];
                k--;
            }
            nums1[k] = nums2[j];
            j++;
        }
    }
    i = m + j;
    while (i < m + n)
    {
        nums1[i++] = nums2[j++];
    }
}

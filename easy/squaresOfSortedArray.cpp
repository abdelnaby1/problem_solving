#include "iostream";
#include "vector";
using namespace std;

vector<int> sortedSquares(vector<int> nums)
    {
        int length = nums.size();
        vector<int> result(length);
        int i = 0;
        int j = length - 1;
        int x;
        int y;
        while (i <= j)
        {
            x = nums[i] * nums[i];
            y = nums[j] * nums[j];
            if (x >= y)
            {
                result[length - 1] = x;
                i++;
            }
            else
            {
                result[length - 1] = y;
                j--;
            }
            length--;
        }
        return result;
    }

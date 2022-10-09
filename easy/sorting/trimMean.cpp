#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
double trimMean(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int minValuesSize, maxValuesSize;
    double result = 0.0;
    minValuesSize = maxValuesSize = arr.size() * 0.05;
    for (int i = 0; i < minValuesSize; i++)
    {
        arr[i] = 0;
    }
    for (int i = size - 1; i > size - maxValuesSize - 1; i--)
    {
        arr[i] = 0;
    }
    for (int i = minValuesSize; i < size - maxValuesSize; i++)
    {
        result += arr[i];
    }
    return result / (size - 2 * minValuesSize);

    return result;
}

int main()
{
    vector<int> nums = {6, 2, 7, 5, 1, 2, 0, 3, 10, 2, 5, 0, 5, 5, 0, 8, 7, 6, 8, 0};
    cout << trimMean(nums);
}
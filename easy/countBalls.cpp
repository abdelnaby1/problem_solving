#include <unordered_map>
using namespace std;
class Solution
{
public:
    int getDigits(int num)
    {
        int sumOfDigits = 0;
        while (num > 0)
        {
            sumOfDigits += num % 10;
            num = num / 10;
        }
        return sumOfDigits;
    }
    int countBalls(int lowLimit, int highLimit)
    {
        unordered_map<int, int> map;
        for (int i = lowLimit; i <= highLimit; i++)
        {
            int digits = getDigits(i);
            map[digits]++;
        }
        int max = 0;
        for (auto &count : map)
        {
            if (count.second > max)
            {
                max = count.second;
            }
        }
        return max;
    }
};
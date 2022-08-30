#include <unordered_map>
using namespace std;
class Solution
{
    unordered_map<int, int> table;

public:
    int climbStairs(int n)
    {
        if (table.find(n) != table.end())
            return table[n];
        if (n == 0)
            return 1;
        if (n == 1)
            return 1;
        table[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return table[n];
    }
};
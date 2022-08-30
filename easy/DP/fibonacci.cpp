#include <unordered_map>
using namespace std;
class Solution
{
private:
    unordered_map<int, int> table;

public:
    int fib(int n)
    {
        if (table.find(n) != table.end())
            return table[n];
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        table[n] = fib(n - 1) + fib(n - 2);
        return table[n];
    }
};
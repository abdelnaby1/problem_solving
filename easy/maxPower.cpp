#include <stack>
#include <iostream>
using namespace std;
int maxPower(string s)
{
    int max = -1;
    int i = 0;
    int j;
    int size = s.size();
    while (i < size)
    {
        j = i;
        int count = 0;
        while (s[i] == s[j])
        {
            j++;
            count++;
        }
        if (count > max)
        {
            max = count;
        }
        i++;
    }
    return max;
}
int main()
{
    cout << maxPower("leetcode");
}
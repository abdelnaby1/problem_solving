#include <iostream>
#include <vector>
using namespace std;
string reverseWords(string s)
{
    for (int i = 0; i < s.size();)
    {
        int k = i;
        while (k < s.size() && s[k] != ' ')
            k++;
        int j = k;
        k--;
        while (i < k)
        {
            swap(s[i++], s[k]);
            k--;
        }
        i = j + 1;
    }
    return s;
}
int main()
{
    string s = "God Ding";
    string s2 = reverseWords(s);
    cout << s2;
    return 0;
}
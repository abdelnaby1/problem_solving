#include <iostream>
#include <cctype>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {

        if (!isalpha(s[i]) && !isdigit(s[i]))
        {
            i++;
        }
        else if (!isalpha(s[j]) && !isdigit(s[j]))
        {
            j--;
        }
        else if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }

    return true;
}
int main()
{
    string s = "ab2a";
    cout << isPalindrome(s);
    return 0;
}
#include <iostream>
#include <cctype>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0;
    int numberOfAllowedToDelete = 1;
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
            if (numberOfAllowedToDelete > 0)
            {
                numberOfAllowedToDelete--;
                if (tolower(s[i]) == tolower(s[i + 1]) || tolower(s[i]) == tolower(s[j - 1]))
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                return false;
            }
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
    string s = "eccer";
    cout << isPalindrome(s);
    return 0;
}
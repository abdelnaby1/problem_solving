#include <iostream>
using namespace std;
bool isBadVersion(int version)
{
    if (version == 5 || version == 4)
    {
        return true;
    }
}

int firstBadVersion(int n)
{
    int low = 0;
    int high = n;
    int middle;
    int bad = n;
    while (low <= high)
    {
        middle = low + (high - low) / 2;

        if (isBadVersion(middle) == true)
        {
            high = middle - 1;
            bad = middle;
        }
        else
        {
            low = middle + 1;
        }
    }

    return bad;
}
int main()
{
    cout << firstBadVersion(1) << endl;
    return 0;
}
#include <iostream>
using namespace std;
double myPow(double x, int n)
{
    if (abs(x) < 0.01)
    {
        return 0.0;
    }
    if (x == 1)
    {
        return x;
    }
    else if (x == -1)
    {
        if (n % 2 == 0)
            return 1.0;
        return -1.0;
    }
    if (n <= INT_MIN)
    {
        return 0.0;
    }

    if (n == 1)
    {
        return x;
    }
    else if (n == 0)
    {
        x = 1;
        return x;
    }
    if (n == 0)
    {
        return 1;
    }
    else if (n > 0)
    {
        return x * myPow(x, n - 1);
    }
    else
    {
        return 1 / myPow(x, -n);
    }
}
int main()
{
    double res = myPow(0.00001, 2147483647);
    cout << res << endl;
    return 0;
}
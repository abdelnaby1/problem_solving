#include <iostream>
using namespace std;
int divide(int dividend, int divisor)
{
    int sign = (dividend < 0) ^ (divisor < 0) ? 1 : 0;
    long long int i = 0;
    dividend = abs(dividend);
    divisor = abs(divisor);
    if (dividend <= INT_MIN)
    {
        dividend = INT_MAX;
    }
    while (dividend >= divisor)
    {
        dividend -= divisor;
        i++;
    }
    if (i >= INT_MAX)
    {
        return INT_MAX;
    }
    else if (i <= INT_MIN)
    {
        return INT_MIN;
    }
    else if (sign)
    {
        return -1 * i;
    }
    return i;
}
int main()
{
    double res = divide(-2147483648, -1);
    cout << res << endl;
    // cout << INT_MIN;
    return 0;
 }
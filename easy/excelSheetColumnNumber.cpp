#include <iostream>
using namespace std;
string convertToTitle(int columnNumber)
{
    string cTitle = "";
    while (columnNumber)
    {
        cTitle = (char)((columnNumber - 1) % 26 + 65) + cTitle;
        columnNumber = (columnNumber - 1) / 26;
    }
    return cTitle;
}

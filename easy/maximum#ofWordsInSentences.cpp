#include <iostream>
#include <vector>
using namespace std;
int mostWordsFound(vector<string> &sentences)
{
    int max = 0;
    for (int i = 0; i < sentences.size(); i++)
    {
        int sum = 1;
        int j = 0;
        while (j < sentences[i].size())
        {
            if (sentences[i][j] == ' ')
            {
                sum++;
            }
            j++;
        }
        if (sum > max)
            max = sum;
    }
    return max;
}
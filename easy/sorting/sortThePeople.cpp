#include <iostream>
#include <vector>
using namespace std;
vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{

    for (int i = 0; i < heights.size() - 1; i++)
    {
        for (int j = 0; j < heights.size() - 1; j++)
        {
            if (heights[j] < heights[j + 1])
            {
                swap(heights[j], heights[j + 1]);
                swap(names[j], names[j + 1]);
            }
        }
    }
    return names;
}
int main()
{
}
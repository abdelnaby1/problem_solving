#include <iostream>
#include <unordered_map>
using namespace std;
string decodeMessage(string key, string message)
{
    char ch = 'a';
    unordered_map<char, char> map;
    for (int i = 0; i < key.size(); i++)
    {

        if (key[i] >= 97 and key[i] <= 122)
        {
            if (map.find(key[i]) == map.end())
            {
                map[key[i]] = ch;
                ch++;
            }
        }
    }
    for (int i = 0; i < message.size(); i++)
    {
        if (message[i] >= 97 and message[i] <= 122)
        {
            message[i] = map[message[i]];
        }
    }
    return message;
}
int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    cout << decodeMessage(key, message);
}
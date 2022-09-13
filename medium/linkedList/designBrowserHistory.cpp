#include <iostream>
#include <list>
using namespace std;
class BrowserHistory
{
public:
    list<string> history;
    list<string>::iterator iter;
    BrowserHistory(string homepage)
    {
        history.push_back(homepage);
        iter = history.begin();
    }

    void visit(string url)
    {
        auto it = iter;
        it++;
        history.erase(it, history.end());
        history.push_back(url);
        iter++;
    }

    string back(int steps)
    {
        while (iter != history.begin() && steps--)
            iter--;
        return *iter;
    }

    string forward(int steps)
    {
        while (iter != (--history.end()) && steps--)
            iter++;
        return *iter;
    }
};

#include <queue>
using namespace std;
class MyStack
{
private:
    queue<int> q1;
    queue<int> q2;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        if (q1.empty())
            return -1;

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int el = q1.front();
        q1.pop();
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return el;
    }

    int top()
    {
        if (q1.empty())
            return -1;

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int el = q1.front();
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return el;
    }

    bool empty()
    {
        return q1.empty() && q2.empty();
    }
};
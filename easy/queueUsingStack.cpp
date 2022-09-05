#include <stack>
using namespace std;
class MyQueue
{
private:
    stack<int> st1;
    stack<int> st2;

public:
    MyQueue()
    {
    }
    void push(int x)
    {
        st1.push(x);
    }

    int pop()
    {
        if (st1.empty() && st2.empty())
        {
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int it = st2.top();
        st2.pop();
        return it;
    }

    int peek()
    {
        if (st1.empty() && st2.empty())
        {
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int it = st2.top();
        return it;
    }

    bool empty()
    {
        return st1.empty() && st2.empty();
    }
};

#include <iostream>
#include <stack>
using namespace std;

#define n 100
class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    Stack stk;
    stk.push(11);
    stk.push(22);
    stk.push(33);
    stk.push(44);
  //  stk.pop();
   // stk.pop();
   // stk.pop();
   // stk.pop();
    cout << stk.Top() << endl;
    cout << stk.empty() << endl;
    return 0;
}
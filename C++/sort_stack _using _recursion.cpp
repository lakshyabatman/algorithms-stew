#include <bits/stdc++.h>
using namespace std;
stack<int> s;

void insert_stack(int x)
{
    if (s.empty() or s.top() > x)
        s.push(x);
    else
    {
        int n = s.top();
        s.pop();
        insert_stack(x);
        s.push(n);
    }
}
void sort_stack()
{
    if (s.size() > 0)
    {
        int k = s.top();
        s.pop();
        sort_stack();
        insert_stack(k);
    }
}
int main()
{
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(2);
    s.push(4);
    sort_stack();
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}
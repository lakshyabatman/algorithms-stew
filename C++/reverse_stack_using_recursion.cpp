#include <bits/stdc++.h>
using namespace std;
stack<int> s;

void insert_stack(int x)
{
    if (s.size() == 0)
        s.push(x);
    else
    {
        int n = s.top();
        s.pop();
        insert_stack(x);
        s.push(n);
    }
}
void revstack()
{
    if (s.size() > 0)
    {
        int k = s.top();
        s.pop();
        revstack();
        insert_stack(k);
    }
}
int main()
{
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    revstack();
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}
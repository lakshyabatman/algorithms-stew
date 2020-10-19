#include <iostream>
using namespace std;
int main()
{
int x, s, n,  y = 0, cntr = 0, cntr1 = 0;
cout << "Enter the number of rows to show number pattern: ";
cin >> n;
for(x = 1; x <= n; ++x)
{
for(s = 1; s <= n-x; ++s)
{
cout << "  ";
++cntr;
}
while(y != 2 * x - 1)
{
if (cntr <= n - 1)
{
cout << x + y;
++cntr;
}
else
{
++cntr1;
cout <<  (x + y - 2 * cntr1);
}
++y;
}
cntr1 = cntr = y = 0;
cout << "\n";
}
return 0;
}

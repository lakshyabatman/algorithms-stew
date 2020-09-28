#include<iostream>
using namespace std;


int main() {
  long long int n,m,a;
  cin >> n >> m >> a;
  long long int x=0,y=0;
  x = n/a;
  if(n%a>0) {
    x+=1;
  }
  m-=a;
  if(m>0) {
    y=((m/a)*x);
    if(m%a>0) {
      y+=x;
    }
  }
  cout << x+y<<endl;
  return 0;
}
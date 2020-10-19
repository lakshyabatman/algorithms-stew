#include<iostream>
using namespace std;


int main() {
  int test;
  cin >> test;
  while(test--) {
    int n, x;
    cin >> n >> x;
    if(n == 1 || n ==2) {
      cout << 1<<endl;
    }else {
      n-=2;
      int floor = n/x;
      if(n%x) floor++;
      cout<<floor+1<<endl;
    }
  }

  return 0;
}
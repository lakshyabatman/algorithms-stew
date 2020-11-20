#include<iostream>
#include<string>
using namespace std;


int main() {
  int x =0;
  int test;
  cin >> test;
  while(test--) {
    string operation;
    cin >> operation;
    if(operation[1] == '-') x--;
    else x++;
  }
  cout << x << endl;

  return 0;
}
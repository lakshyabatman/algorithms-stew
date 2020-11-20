#include<iostream>
using namespace std;


int main() {

  long int n;
  long int steps =0;
  int maxStep = 5;
  cin >> n;
  while(n && maxStep) {
    while(n>=maxStep) {
      n-=maxStep;
      steps++;
    }
    maxStep--;
  }
  cout << steps<<endl;
  return 0;
}
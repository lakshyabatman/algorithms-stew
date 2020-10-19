#include<iostream>
#include<vector>
using namespace std;


int main() {

  int test;
  cin>> test; 
  while(test--) {
    int n;
    cin >> n;
    int temp = n;
    vector<int> res;
    int len = 0;
    while(temp>0) {
      res.push_back(temp%10);
      temp/=10;
      len++;
    }
    bool isPalindrome = true;
    int left = 0;
    int right = len-1;
    while(left<=right) {
      if(res[left]!=res[right]) {
        isPalindrome = false;
        break;
      }
      left++;
      right--;
    }
    cout << isPalindrome<<endl;
  }
  return 0;
}
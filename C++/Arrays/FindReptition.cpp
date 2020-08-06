/**
 * 
 * @description: Find duplicates in array in O(n) space
 * 
 * @author: Lakshya Khera
 * 
 * */

#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int> arr) {
  vector<int> res;
  for(int i =0;i<arr.size();i++) {
    if(arr[abs(arr[i])%arr.size()]>=0) {
      arr[abs(arr[i])%arr.size()]= -arr[abs(arr[i])%arr.size()];
    }else {
      res.push_back(abs(arr[i]));
    }
  }
  return res;
}

int main() {
  vector<int> arr {13,9,25,1,1, 0, 22, 13, 22, 20, 3, 8, 11, 25, 10, 3, 15, 11, 19, 20, 2, 4, 25, 14, 23, 14};
  vector<int> res = findDuplicates(arr);
  for(int i : res) {
    cout << i << " ";
  }

  return 0;
}
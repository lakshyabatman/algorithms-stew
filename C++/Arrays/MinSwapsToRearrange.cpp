/**
 * 
 * 
 *@description: Minimum swaps required to bring all elements less than or equal to k together 
 * 
 * @author: Lakshya Khera
 * 
 * */

#include<iostream>
#include<vector>
using namespace std;

int minSwap(vector<int> arr, int k) {
  int cnt = 0;
  int bad = 0;
  for(int i : arr) {
    if(i<k) cnt++;
    if(i>k) bad++;
  }
  int ans = bad;
  for(int i =0,j =cnt;j<arr.size();i++,j++) {
    if(arr[i]>k) {
      --bad;
    }
    if(arr[j]>k) {
      ++bad;
    }
    ans =min(ans,bad);
  }
  return ans;
}

int main() {
  vector<int> arr= {2, 1, 5, 6, 3};
  int k = 3;
  cout << minSwap(arr, k) << " ";

  return 0;
}
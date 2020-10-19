/**
 * 
 * @description: Rearrange array in alternating positive & negative items with O(1) extra space
 * 
 * @author: Lakshya Khera
 * 
 * */

#include<iostream>
#include<vector>
using namespace std;

void rearrange(vector<int> &arr) {

}

int main() {
  vector<int> arr {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
  rearrange(arr);
  for(int i : arr)
    cout << i<<" ";

  return 0;
}
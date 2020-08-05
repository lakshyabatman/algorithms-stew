/**
 * 
 * 
 * 
 * 
 * */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(int *a,int *b) {
  int temp = *a;
  *a =*b;
  *b= temp;
}
void rearrange(vector<int> &arr) {
  int i=-1;
  for(int j=0;j<arr.size();j++) {
    if(arr[j]<0 ){
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] =temp; 
    }
  }
  int pos = i+1;
  int neg = 0;
  while(pos<arr.size() && neg<pos && arr[neg]<0) {
    swap(&arr[pos], &arr[neg]);
    pos++;
    neg+=2;
    
  }
}

int main() {

  vector<int> arr{-1, 2, -3, 4,5, 6, -7, 8, 9,-9,-10,-13,-14};
  rearrange(arr);
  for(int i : arr)
    cout << i<<" ";

  return 0;
}

//@"4 -3 5 -1 6 -7 2 8 9 "

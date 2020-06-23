#include <bits/stdc++.h> 
using namespace std;

class SegmentTree{
  private:
    int *segmentTree;
  
  public:
    SegmentTree(int arr[], int n ) {
      int m = (int)ceil(log2(n));
      int max_size = 2*int(pow(2,m))-1;
      this->segmentTree = new int[max_size];
      this->constructTree(arr,0,n-1,0);

    }
    int constructTree(int arr[],int ss,int se,int si) {
      cout << ss<< " "<<se<<" "<<si<<endl;
      if(ss == se) {
        this->segmentTree[si] = arr[ss];
        return arr[ss];
      }
      int mid = (se-ss)/2 +ss;
      cout << mid<<endl;
      int left = constructTree(arr,ss,mid,2*si+1);
      int right = constructTree(arr,mid+1,se,2*si+2);
      this->segmentTree[si] = left+right;
      return this->segmentTree[si];
    }
};

int main() {
  int arr[] = {1,2,3,4,5};
  SegmentTree* smt = new SegmentTree(arr,5);
  return 0;
}
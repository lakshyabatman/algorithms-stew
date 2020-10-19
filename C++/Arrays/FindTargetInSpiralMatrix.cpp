#include<bits/stdc++.h>
using namespace std;

int binaryOverRow(int matrix[][3],int target, int left,int right, int row) {
  while(left<=right) {
    int mid = (right-left)/2+left;
    if(matrix[row][mid] == target) return mid;
    if(matrix[row][mid] < target) {
      left = mid+1;
    }else {
      right = mid-1;
    }
  }
  return left;
}

int binaryOverCol(int matrix[][3],int target, int up,int down, int col) {
  while(up<=down) {
      int mid = (down-up)/2+up;
      if(matrix[mid][col] == target) return mid;
      if(matrix[mid][col] < target) {
        up = mid+1;
      }else {
        down = mid-1;
      }
  }
  return  up;
}

vector<int> solve(int matrix[][3],int target) {
  int up = 0;
  int down = 2;
  int right = 2;
  int left = 0;
  vector<int> res(2,-1);
  while(up<down) {
    if(matrix[up][left] == target) {
      res[0] = up;
      res[1] = left;
      return res;
    }else if(matrix[up+1][left]>=target) {
      break;
    }
    up++;
    down--;
    left++;
    right--;
  }
  if(matrix[down][right]== target) {
    res[0] = down;
    res[1] = right;
    return res;
  }else if(matrix[down][right] < target) {
    if(matrix[down][left] == target) {
      res[0] = down;
      res[1] = left;
      return res;
    }else if(matrix[down][left] > target) {
      res[0] = down;
      res[1] =binaryOverRow(matrix,target,left,right,down);
      return res;
    }else {
      res[1] = left;
      res[0] = binaryOverCol(matrix,target,up,down,left);
      return res;
    }
  }else {
    if(matrix[up][right] == target) {
      res[0] = up;
      res[1] = right;
      return res;
    }else if(matrix[up][right] < target) {
      res[1] = right;
      res[0] = binaryOverCol(matrix,target,up,down,right);
      return res;
    }else {
      res[0] = up;
      res[1] =binaryOverRow(matrix,target,left,right,down);
      return res;
    }

    return res;

  }

}

int main() {
  int matrix[3][3] ={
    {1,2,3},
    {8,9,4},
    {7,6,5}
  };
  int target = 4;
  vector<int> res = solve(matrix,target);
  cout << res[0]<< " "<<res[1]<<endl; 
}
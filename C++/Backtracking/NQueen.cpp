
#include<iostream>
#include<vector>
#include <iomanip>

using namespace std;

bool isSafe(vector<vector<int> > *board, int x, int y) {
  if(x>=(*board).size() || y>=(*board)[0].size()) {
    return false;
  }

  for(int i =0;i<y;i++) {
    if((*board)[x][i]) {
      return false;
    }
  }

  for(int i=x,j=y;i>=0 && j>=0;i--,j--) {
    if((*board)[i][j]) return false;
  }
  for(int i=x,j=y;i>=0 && j<(*board)[0].size();i--,j++) {
    if((*board)[i][j]) return false;
  }
  return true;

}

bool solveNqUtil(vector<vector<int> > *board, int col,int n) {
  if(col>=n) return true;
  for(int i =0;i<n;i++ ) {
    if (isSafe(board, i, col)) { 
            (*board)[i][col] = 1; 
            if (solveNqUtil(board, col + 1,n)) 
                return true; 
            (*board)[i][col] = 0;
        } 
  }
  return false;

}
void solveNq(int n) {
  vector<vector<int> > *board = new vector<vector<int> > (n, vector<int> (n,0));
  if(solveNqUtil(board,0,n) == true) {
    cout << "Solution exist"<<endl;
    for (int x = 0; x < n; x++) { 
        for (int y = 0; y < n; y++) 
            cout << " " << setw(2)<< (*board)[x][y] << " "; 
        cout << endl; 
    } 
    return;
  }
  cout << "Solution doesn't exist!"<<endl;

}

int main() {

  solveNq(4);
  return 0;
}
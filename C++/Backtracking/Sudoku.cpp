#include<iostream>
using namespace std;
#define N 9 
#define UNASSIGNED 0 


bool FindUnassigned(int grid[N][N], int *row, int *col) {
  for (*row = 0; *row < N; (*row)++) 
          for (*col = 0; *col < N; (*col)++) 
              if (grid[*row][*col] == UNASSIGNED) 
                  return true; 
  return false;
}

bool UsedInRow(int grid[N][N], int row, int num) { 
    for (int col = 0; col < N; col++) 
        if (grid[row][col] == num) 
            return true; 
    return false; 
} 
  
bool UsedInCol(int grid[N][N], int col, int num) { 
    for (int row = 0; row < N; row++) 
        if (grid[row][col] == num) 
            return true; 
    return false; 
} 
  
bool UsedInBox(int grid[N][N], int boxStartRow,int boxStartCol, int num) { 
    for (int row = 0; row < 3; row++) 
        for (int col = 0; col < 3; col++) 
            if (grid[row + boxStartRow] 
                    [col + boxStartCol] 
                == num) 
                return true; 
    return false; 
} 

bool isSafe(int grid[N][N], int row, int col, int num) { 
    return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) && !UsedInBox(grid, row - row % 3,col - col % 3, num) && grid[row][col] == UNASSIGNED; 
} 

void printGrid(int grid[N][N]) {
  for(int i =0;i<N;i++) {
    for(int j = 0;j<N;j++) {
      cout << grid[i][j]<<" ";
    }
    cout << endl;
  }
}


bool solveSudoku(int grid[N][N]) {
  int row, col;
  if(!FindUnassigned(grid,&row,&col)) {
    return true;
  }
  for(int i =1;i<=9;i++) {
    if(isSafe(grid,row,col,i)) {
      grid[row][col] = i;

      if(solveSudoku(grid)) {
        return true;
      }
      grid[row][col]=UNASSIGNED;
    }
  
  }
  return false;
}
int main() {

  int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 }, 
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 }, 
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 }, 
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 }, 
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 }, 
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 }, 
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 }, 
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 }, 
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
  if(solveSudoku(grid)) {
    printGrid(grid);
    return 0;
  }
  cout << "Solution doesn't exist!";
  

  return 0;
}
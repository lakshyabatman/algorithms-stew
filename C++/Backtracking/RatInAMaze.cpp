#include<iostream>
using namespace std;

#define N 4


bool solveMazeUtil(int maze[N][N], int x ,int y, int output[N][N]) {

  if(x<0 || y<0  || x>=N || y>=N || maze[x][y]== 0) {
    return false;
  }
  if(x == N-1 && y== N-1 && maze[x][y] == 1) {
    output[x][y]=1;
    return true;
  }

  output[x][y] = 1;
  if(solveMazeUtil(maze,x+1,y,output) == true) {
    return true;
  }
  if(solveMazeUtil(maze,x,y+1,output) == true) {
    return true;
  }
  output[x][y] = 0;

  return false;
}

void solveMaze(int maze[N][N]) {


  int output[N][N] = {
  { 0, 0, 0, 0 }, 
  { 0, 0, 0, 0 }, 
  { 0, 0, 0, 0 }, 
  { 0, 0, 0, 0 } 
  };

  if(solveMazeUtil(maze,0,0,output) == true) {
    cout << "Solution exist"<<endl;;
    for(int i =0;i<N;i++) {
      for(int j=0;j<N;j++) {
        cout << output[i][j]<<" ";
      }
      cout << endl;
    }
    return;
  }
  
  cout << "Solution doesn't exist!";
}


int main() {


  int maze[N][N] = {
    { 1, 0, 0, 0 }, 
    { 1, 1, 0, 1 }, 
    { 0, 1, 0, 0 }, 
    { 1, 1, 1, 1 } 
  };

  solveMaze(maze);

  return 0;

}
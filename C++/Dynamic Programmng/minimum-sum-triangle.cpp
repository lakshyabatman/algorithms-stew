#include<iostream>
#include<vector>
using namespace std;


int minimumTotal(vector<vector<int> >& triangle) {
        if(triangle.size() == 0 || triangle[0].size() == 0) return 0;
        int size = triangle.size();
        for(int i = size-2;i>=0;i--) {
            for(int j = 0;j<triangle[i].size();j++) {
                
                if(i > 0  && j == triangle[i].size()-1){
                     triangle[i][j]+= min(triangle[i+1][j] , triangle[i+1][j-1]);
                }
                else {
                    triangle[i][j]+= min(triangle[i+1][j] , triangle[i+1][j+1]);
                }
            }
        }
        return triangle[0][0];
}

int main() {
  vector<vector<int> > vect{ { 1, 2, 3 }, 
                               { 4, 5, 6 }, 
                               { 7, 8, 9 } }; 
  // cout << minimumTotal(triangle);
  return 0;

}
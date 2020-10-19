#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> phase {{3,2}, {-5,-10} , {-20,5}};
// Air => 0 , water=>1 , fire => 2

int main() {
  int test;
  cin >> test;
  while(test--) {
    int health,armor;
    cin >> health>> armor;
    int time = -1;
    int prev = -1;
    while(health>0 && armor >0) {
      //cout << health<< " "<< armor<<endl;
      time++;
      int index = 0;
      if(prev!=0) {
        index= 0;
      }else if(health+phase[1][0]> 0 && armor+phase[1][1]>0) {
        index =1;
      }else {
        index=2;
      }
      health+=phase[index][0];
      armor +=phase[index][1];
      prev = index;
    }
    cout << time<<endl;
  }

  return 0;
}
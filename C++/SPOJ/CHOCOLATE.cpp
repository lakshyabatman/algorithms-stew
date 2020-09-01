#include<iostream>
#include<vector>

using namespace std;


int main() {

  int test;
  cin>> test;
  while(test--) {
    int n;
    int m;
    cin >> m >> n;

    int mSum = 0;
    int nSum = 0;
    for(int i=1;i<m;i++) {
      int temp;
      cin>> temp;
      mSum+=temp;
    }
    for(int i=1;i<n;i++) {
      int temp;
      cin>> temp;
      nSum+=temp;
    }
    cout << nSum<<" "<<mSum<<endl;
    int x = (nSum)+n*(mSum);
    int y = mSum+ m*nSum;
    cout << x<< " "<< y<<endl;
    cout << min(x,y)<<endl;
  }
  return 0;
}
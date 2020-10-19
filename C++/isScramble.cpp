

#include<iostream>
#include<vector>
using namespace std;

int isScramble(const string A, const string B) {
    int nA = A.size();
    int nB = B.size();
    if(A==B) return 1;
    if(nA!=nB) return 0;
    if(nA == 0 ) return 1;
    for(int i=1;i<nA;i++) {
        if(isScramble(A.substr(0,i), B.substr(0,i)) && isScramble(A.substr(i), B.substr(i))) return true;
        if(isScramble(A.substr(0,i), B.substr(nB-i)) && isScramble(A.substr(i), B.substr(0, nB-i))) return true;
    }
    return 0;
}


int main() {
//   A : "qmfcwwzbqkf"
// B : "wfcmbzwqqkf"
  string A = "qmfcwwzbqkf";
  string B = "wfcmbzwqqkf";
  cout << isScramble(A,B)<<endl;

}

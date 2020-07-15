#include<iostream>
#include<vector>
#include <cmath> 

using namespace std;
int flag =0;

bool isPrime(int n) {
  if (n == 1) return false;
  int sqroot = sqrt(n);
  for(int i =2;i<sqroot;i++) {
    if(n%i == 0) return false;
  }
  return true;
};


bool primeafterPwithsumS(int n,int s,int total,vector<int> prime, int index, vector<int> result){
  if(n == 0 && total == 0) {
    for(int i =0;i<result.size();i++) {
      cout << result[i]<< " ";
    }
    cout <<endl;
    flag = 1;
    return true;
  }
  if(total> s || (n == 0 && total != 0) || index>=prime.size() ) return false;
  result.push_back(prime[index]);

  primeafterPwithsumS(n-1,s, total-prime[index], prime,index+1, result);
  result.pop_back();
  primeafterPwithsumS(n, s,total, prime,index+1, result);
  return false;

};



int main() {
  int n = 2;
  int p = 3;
  int s = 4;
  vector<int> prime;
  for(int i =p+1;i<=s;i++) {
    if(isPrime(i)) prime.push_back(i); 
    
  }
  vector<int> result;
  primeafterPwithsumS(n, s, s, prime, 0, result);
  if(flag ==0) {
    cout << "Solution doesn't exist!"<<endl;
  }
  return 0;
}
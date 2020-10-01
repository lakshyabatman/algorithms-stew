#include<bits/stdc++.h>
using namespace std;


bool isVowel(char ch) {
  return (ch== 'a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') || (ch=='y');
}
int main() {
  string s;
  cin >> s;
  string res;
  for(auto ch : s) {
    if(isupper(ch)) {
      ch = tolower(ch);
    }
    if(!isVowel(ch)) {
      res+='.';
      res+=ch;
    }

  }
  cout <<res<<endl;

  return 0;
}
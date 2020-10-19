#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;


bool isValidString(string st) {
  int count =0;
  for(auto i: st) {
    if(i == ')') {
      if(count == 0) return false;
      count--;
    }else if(i == '(') {
      count++;
    }
  }
  return count==0;
}

bool isParentheses(char s) {
  if(s == '(' || s == ')') return true;
  return false;
}

void removeInvalidParentheses(vector<string> &res, string str) {
  if(str.empty()) return;
  set<string> visit; // For keep check whether string is visited or not!
  queue<string> q;
  q.push(str);
  while(!q.empty()) {
    string st = q.front(); q.pop();
    if(isValidString(st)) {
      res.push_back(st);
      continue;
    }
    for(int i =0;i<st.size();i++) {
      if(!isParentheses(st[i])) continue;
      string temp = st.substr(0,i) + st.substr(i+1);
      if(visit.find(temp) == visit.end()){
        q.push(temp);
        visit.insert(temp);
      }
    }
  }

}


int main() {
  string str = "()())()";
  vector<string> result ;
  removeInvalidParentheses(result,str);
  for(string i : result) {
    cout << i<<" ";
  }
  return 0;
}
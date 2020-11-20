#include<iostream>
#include<vector>
#include<string>
#include <sstream>

using namespace std;




int main() {
  string str("Hello from the dark side");
   string tmp;
   stringstream str_strm(str);
   vector<string> words;
   while (str_strm >> tmp) {
      words.push_back(tmp);
   }
   for(int i = 0; i<words.size(); i++)
      cout << words[i] << endl;
}

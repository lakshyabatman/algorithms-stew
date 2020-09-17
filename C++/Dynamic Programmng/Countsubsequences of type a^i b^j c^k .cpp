/**
 * 
 * https://practice.geeksforgeeks.org/problems/count-subsequences-of-type-ai-bj-ck/0
 * 
 * 
 * */


#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--) {
	    string s;
	    cin >> s;
	    int c =0;
	    int bc =0;
	    int a = 0;
	    for(char ch : s) {
	        if(ch == 'a') {
	            a = 1+ 2*a;
	        }else if(ch == 'b') {
	            bc = a+ 2*bc;
	        }else {
	            c = bc+2*c;
	        }
	    }
	    cout << c<<endl;
	} 
	return 0;
}
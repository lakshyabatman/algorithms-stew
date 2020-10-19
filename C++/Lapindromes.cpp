#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Lapindrome(string input) {
    int size = input.length();
    int half = size/2;
    string secondHalf, firstHalf;
    if(size%2==0) {
        firstHalf = input.substr(0,half);
        secondHalf = input.substr(half,half);
    }else {
        firstHalf = input.substr(0,half);
        secondHalf = input.substr(half+1,half);
    }
    // cout << firstHalf << " " <<secondHalf <<endl;
    sort(secondHalf.begin(),secondHalf.end());
    sort(firstHalf.begin(),firstHalf.end());
    if(secondHalf == firstHalf) {
        return "YES";
    }
    return "No";  
}

int main() {
    int test;
    cin >> test;
    for(int i=0;i<test;i++) {
        string input;
        cin >> input;
        string result = Lapindrome(input);
        cout << result <<endl;

    }
    return 0;
}

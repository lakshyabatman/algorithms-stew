#include<iostream>
#include<string>
using namespace std;

string Lapindrome(string input) {
    int firstHalf[26] = {0};
    int seconfHalf[26] = {0};
    int size = input.length();
    int half = size/2;
    if (size % 2 ==0 ) {
        for(int i=0;i<half;i++) {
            firstHalf[int(input[i])]++;
            seconfHalf[int(input[i+half])]++;
        }
    }else {
        for(int i=0;i<half;i++) {
            firstHalf[int(input[i])]++;
            seconfHalf[int(input[i+half+1])]++;
        }
    }
    for (int i =0;i<26;i++) {
        if(firstHalf[i]!=seconfHalf[i]) {
            return "No";
        }
    }
    return "Yes";
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

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>greaterElementfromLeft(vector<int> &A,int n) {
    stack<int> s;
    vector<int> left_vector;
    for(int i =0;i<n;i++) {
        while(!s.empty() && A[i] > A[s.top() - 1]) {
            int r = s.top();
            s.pop();
            left_vector[r-1] = i+1;
        }
        s.push(i+1);
    }
    return left_vector;
}

// vector<int>greaterElementfromRight(vector<int>&A,int n) {
    
// }


int maxSpecialProduct(vector<int> &A) {
    int n = A.size();
    vector<int> left = greaterElementfromLeft(A,n);
    for(int i =0;i<A.size();i++) {
        cout << left[i] <<endl;
    }
    return 1;
}

int main() {
    std::vector <int> A {1,2,3,4,5,6};
    maxSpecialProduct(A);

}
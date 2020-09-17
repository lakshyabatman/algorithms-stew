#include<iostream>
using namespace std;


int solve(Node* node, int &res) {
	if(node== NULL) return 0;
	int left= solve(node->left,res);
	int right = solve(node->right,res);
	int temp = max(left,right)+1;
	res = max(res,left+right+1);
	return temp;

}



int diameter(Node* node) {
	int res = 0;
	solve(node,res);
	return res;
	
}

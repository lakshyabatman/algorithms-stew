// CodeChef
// Code: ZCO14003

#include <iostream>
#include<algorithm>

using namespace std;
int main() {
	// your code goes here
	int range;
	cin >> range;
	int result;
	int prices[range];
	for (int i =0;i<range;i++) {
	    int temp;
	    cin >> prices[i];
	}
	sort(prices,prices+ range);
	for(int i =0;i<range;i++) {
	    prices[i]*=(i+1);
	    if(result < prices[i]) {
	        result = prices[i];
	    }
	}
	cout << result <<endl;
}

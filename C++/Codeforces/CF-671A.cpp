#include<bits/stdc++.h> 
using namespace std; 
int minCoins(int coins[], int m, int V) { 
	int table[V+1]; 

	table[0] = 0; 
    for (int i=1; i<=V; i++) 
		table[i] = INT_MAX; 
    for (int i=1; i<=V; i++) { 
		for (int j=0; j<m; j++) 
		if (coins[j] <= i) 
		{ 
			int sub_res = table[i-coins[j]]; 
			if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
				table[i] = sub_res + 1; 
		} 
	} 
	return table[V]; 
} 

int main() 
{ 
	int coins[] = {5,4,3,2,1}; 
	int m = sizeof(coins)/sizeof(coins[0]); 
	int V ;
    cin>>V; 
	cout<< minCoins(coins, m, V); 
	return 0; 
}
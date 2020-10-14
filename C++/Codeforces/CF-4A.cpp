#include<iostream>
using namespace std;

int main()
{ 
    int s; 
    cin >> s;
    if(s % 2 == 0 && s > 2) 
    {
        cout << "YES" << endl; 
    }
    else 
    {
        cout << "NO" << endl; 
    }    
    return 0; 

}
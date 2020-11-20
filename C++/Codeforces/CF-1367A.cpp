#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,str;
        cin>>s;
        int n = s.size();
        str.pb(s[0]);
        for(int i=1;i<n;i+=2){
            str.pb(s[i]);
        }
        cout<<str<<endl;

    }
    return 0;
}
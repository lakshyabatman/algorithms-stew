#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,str,ans;
    cin>>s;
    int t=5;
    while(t--){
        cin>>str;
        if(str[0] == s[0] || str[1] == s[1]){
            ans = "Yes";
            break;
        }
        else{
            ans = "No";
        }
    }
    cout<<ans;
}
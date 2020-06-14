#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    
    cin>>s;
    
    int l = s.size();
    
    int flag = 1;
    
    for(int i = 0; i < l/2; ++i) {

        if(s[i] != s[l-i-1]) {

            flag = 0;
            break;
        }
    }
    
    if(flag) {
        
        cout<<"YES";
    }
    else {
        
        cout<<"NO";
    }
    return 0;
}

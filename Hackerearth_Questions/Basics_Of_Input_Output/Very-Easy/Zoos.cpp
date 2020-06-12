#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    cin>>s;
    
    int x = 0, y = 0;
    
    for(int i = 0; i < s.size(); ++i) {

        if(s[i] == 'z' || s[i] == 'Z') {
         
            x++;
        }
        else {
            
            y++;
        }
    }
    
    if(y == 2*x) {
        
        cout<<"Yes";
    }
    else {
     
        cout<<"No";
    }
    return 0;
}

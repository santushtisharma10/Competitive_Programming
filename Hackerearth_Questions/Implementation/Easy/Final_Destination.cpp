#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    cin>>s;
    
    int l = s.size();
    int x = 0, y = 0;
    
    for(int i = 0; i < l; ++i) {

        if(s[i] == 'L') {
            
            x--;
        }
        if(s[i] == 'R') {
            
            x++;
        }
        if(s[i] == 'U') {
            
            y++;
        }
        if(s[i] == 'D') {
            
            y--;
        }
    }
    
    cout<<x<<" "<<y;
    
    return 0;
}

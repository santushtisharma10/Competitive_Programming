#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    cin>>s;
    
    int n;
    
    cin>>n;
    
    for(int i = 0; i < s.size(); ++i) {

        if(s[i] >= 'A' && s[i] <= 'Z') {
         
            s[i] = (s[i] +n -65)%26 +65;
        }       
        if(s[i] >= 'a' && s[i] <= 'z') {
            
            s[i] = (s[i] +n -97)%26 +97;
        }
        if(s[i] >= '0' && s[i] <= '9') {
         
            s[i] = (s[i] +n -48)%10 +48;
        }
    }
    
    cout<<s;
    
    return 0;
}

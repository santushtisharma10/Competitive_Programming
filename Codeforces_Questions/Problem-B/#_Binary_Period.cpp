//Educational Codeforces Round 86 (Rated for Div. 2)-> problem: (B) Binary Period

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        string s;
        
        cin>>s;
        
        multiset<char> a(s.begin(), s.end());
        
        if(a.count('1') == s.length() || a.count('1') == 0) {
            
            cout<<s;
        }
        else {
            
            for(int i = 0; i < s.length(); ++i) {
                
                cout<<s[i];
                
                if(s[i] == '1') {
                    
                    if(s[i+1] == '1') {
                       
                       cout<<"0";
                    }
                }
                else {
                    
                    if(s[i+1] == '0') {
                        cout<<"1";
                    }
                }
            }
        }
        cout<<"\n";
    }
	return 0;
}

//Codeforces Round #644 (Div. 3)-> problem: (A) Minimal Square

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int a, b;
        
        cin>>a>>b;
        
        long long int ans;
        
        if(a > b) {
            
            ans = max(a, 2*b);
            
            ans = pow(ans,2);
        }
        else {
            
            ans = max(b, 2*a);
            
            ans = pow(ans, 2);
        }
        
        cout<<ans<<"\n";
    }
	return 0;
}

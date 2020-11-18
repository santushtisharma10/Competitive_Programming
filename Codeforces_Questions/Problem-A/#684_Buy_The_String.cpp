#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin>>t;
    
    while(t--) {
        
        int n, c0, c1, h;
        
        cin>>n>>c0>>c1>>h;
        
        string s;
        
        cin>>s;
        
        int count0 = 0, count1;
        int ans;
        for(int i =0; i  < s.length(); ++i) {
            
            if(s[i] == '0') {
                
                count0++;
            }
        }
        
        count1 = n-count0;
        
        ans = min(count0*c0+count1*c1, c0*n+h*count1);
        ans = min(ans, c1*n + h*count0);
        
        cout<<ans<<"\n";
    }
    
	return 0;
}

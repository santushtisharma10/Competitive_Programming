// Codeforces Round #644 (Div. 3)-> problem: (B) Honest Coach

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int n;
        
        cin>>n;
        
        long long int a[n];
        
        for(int i = 0; i < n; ++i) {
            
            cin>>a[i];
        }
        sort(a,a+n);
        
        long long int min = a[n-1]-a[n-2];
        
        for(int i = n-2; i >= 1; --i) {
            
            long long int ans = (a[i]-a[i-1]);
            
            if(ans < min) {
                
                min = ans;
            }
            if(min == 0) {
                break;
            }
        }
        cout<<min<<"\n";
    }
	return 0;
}

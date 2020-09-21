// Link of the question- https://codeforces.com/problemset/problem/1371/B

//Code

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int n, r;
    
        cin>>n>>r;
    
        long long int ans; 
    
        if(r >= n) {
            
            ans = (n*(n-1))/2 + 1;
        } 
        else {
            
            ans = (r*(r+1))/2;
        }
        
        cout<<ans<<"\n";
    }
	return 0;
}

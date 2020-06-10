// Educational Codeforces Round 84 (Rated for Div. 2)-> problem: (A) Sum of Odd Integers

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int n, k;
        
        cin>>n>>k;
        
        if(pow(k,2) > n) {
            
            cout<<"NO\n";
        }
        else if(n%2 != k%2) {
            
            cout<<"NO\n";
        }
        else {
            cout<<"YES\n";
        }
    }
    
    return 0;
}

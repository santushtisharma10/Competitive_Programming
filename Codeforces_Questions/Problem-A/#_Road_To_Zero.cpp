// Educational Codeforces Round 86 (Rated for Div. 2)-> problem: (A) Road To Zero

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int x, y;
        
        cin>>x>>y;
        
        long long int a, b;
        
        cin>>a>>b;
        
        long long int ans = min((abs(x)+abs(y))*a, min(abs(x), abs(y))*b + abs(x-y)*a);
        
        cout<<ans<<"\n";
    }
    
    return 0;
}

//Codeforces Round #641 (Div. 2)-> problem: (A) Orac and Factors

#include <bits/stdc++.h>
using namespace std;
long long int find_div(long long int n) {
    
    long long int i;
    for(i = 2; i <= n; ++i) {
        
        if(n%i == 0) {
            break;
        }
    }
    
    return i;
    
}

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int n, k;
        
        cin>>n>>k;
        
        long long int ans = n;
        
        //long long int ans = n;
        
        if(n%2 == 0) {
            
            ans += 2*(k);
        }
        
        else {
            
            for(int i = 0; i < k; ++i) {
            
                n += find_div(n);
                ans = n;
                
                if(n%2 == 0) {
                
                    ans += 2*(k-i-1);
                    break;
                }
            }
        }
        
        cout<<ans<<"\n";
    }
    
	return 0;
}

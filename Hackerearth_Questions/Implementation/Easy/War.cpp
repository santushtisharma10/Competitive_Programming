#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    ll t;
    
    cin>>t;
    
    while(t--) {

        ll n;
        
        cin>>n;
        
        ll a[n];
        int a_ = 0;

        for(int i = 0; i < n; ++i) {

            cin>>a[i];
            
            if(a_ < a[i]) {
                
                a_ = a[i];
            }
        }
        
        int b_ = 0;

        ll b[n];

        for(int i = 0; i < n; ++i) {

            cin>>b[i];
            
            if(b_ < b[i]) {
                
                b_ = b[i];
            }
        }
        
        if(b_ > a_) {
            
            cout<<"Alice\n";
        }
        else if(a_ > b_) {
        
        cout<<"Bob\n";
        }
        else {
            
            cout<<"Tie\n";
        }
    }
    
    return 0;
}

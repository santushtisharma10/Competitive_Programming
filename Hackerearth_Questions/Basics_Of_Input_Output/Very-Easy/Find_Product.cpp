#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    ll n, m = 1000000007;
    ll ans = 1;
    
    cin>>n;
    
    ll x[n];
    
    for(int i = 0; i < n; ++i) {

        cin>>x[i];
        
        ans = (ans*x[i])%m;
    }
    
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int t;
    
    cin>>t;
    
    while(t--) {

        long long int n;
        
        cin>>n;
        
        long int x = n | (n +1);
        
        cout<<x<<"\n";
        
    }
    
    return 0;
}

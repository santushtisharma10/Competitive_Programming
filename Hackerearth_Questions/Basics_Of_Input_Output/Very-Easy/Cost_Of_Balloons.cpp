#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    
    cin>>t;
    
    while(t--) {

        int p1, p2;
        
        cin>>p1>>p2;
        
        int n;
        
        cin>>n;
        
        int xl = 0, xr = 0;
        
        while(n--) {

            int l, r;
            
            cin>>l>>r;
            
            if(l == 1) {
                
                xl++;
            }
            if(r == 1) {
                
                xr++;
            }
        }
        
        int min1 = min(p1*xl + p2*xr, p1*xr + p2*xl);
        
        cout<<min1<<"\n";
    }
}

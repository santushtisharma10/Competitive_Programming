#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int t;
    
    cin>>t;
    
    while(t--) {

        int n;
        
        cin>>n;
        
        long long int a[n];
        
        long long int total = 0;
        
        for(int i = 0; i < n; ++i) {

            cin>>a[i];
            
            if(a[i] > 0) {
                
                total += a[i];
            }
        }
     
        if(total && !(total&(total-1))){
            
            cout<<"Yes\n";
        }
        else {
         
            cout<<"No\n";
        } 
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

    long int t;
    
    cin>>t;
    
    while(t--) {
            
        int n;
      
        cin>>n;
      
        int count = 0;
      
        for(int i = 1; i <= n; ++i) {

            for(int j= i+1; j <= n; ++j) {

                if((i^j) <= n) {
                    
                    count++;
                }
            }
        }
    
        cout<<count<<"\n";
    }
    
    return 0;
}

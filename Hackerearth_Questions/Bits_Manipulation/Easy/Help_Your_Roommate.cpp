#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    long long int t;
    
    cin>>t;
    
    while(t--) {

        long long n;
     
        cin>>n;
     
        int count = 1;
     
        while(n&(n-1)) {

            n = n&(n-1);
            count++;
        }
        
        cout<<count<<"\n";
    }
    return 0;
}

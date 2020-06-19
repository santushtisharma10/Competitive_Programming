#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;
    
    cin>>n;
    
    long long count = 0;
    
    while(n--) {
        
        long long int x;
    
        cin>>x;
    
        if((x&(x-1)) == 0) {
            
            count++;
        }
    }
    
    cout<<count;

    return 0;
}

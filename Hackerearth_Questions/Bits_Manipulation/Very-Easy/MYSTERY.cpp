#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int n;
    
    while(cin>>n) {

        int count = 0;
        
        while(n) {

            n = n&(n-1);
            count++;
        }
        
        cout<<count<<"\n";
    }
    
    return 0;
}

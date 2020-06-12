#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    
    cin>>t;
    
    while(t--) {

        string a, b;
        
        cin>>a;
        cin>>b;
        
       long long int x = 0;
        
        int l1 = a.size();
        int l2 = b.size();
        
        for(int i = 0; i < l1; ++i) {

            for(int j = 0;j < l2; ++j) {

                if(a[i] == b[j]) {

                   a[i] = 0;
                   b[j] = 0;
                   x++;
                   break;
               }
            }
        }
        
      cout<<l1 +l2 -2*x<<"\n";
    
    }
    
    return 0;
}

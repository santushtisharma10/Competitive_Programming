#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    
    int k;
    
    cin>>s>>k;
    
    int l = s.size();
    
    int q = 0;
 
    for(int i = 0; i < l; ++i) {
                                     
        if(s[i] != '9' && q != k) {

            s[i] = '9';
            q++;
        }     
    }

    cout<<s;

    return 0;
}

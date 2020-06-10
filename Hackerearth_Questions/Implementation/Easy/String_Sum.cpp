#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    cin>>s;
    
    int sum = int(s[0]) -96;
    
    int l = s.size();
    
    for(int i = 1; i < l; ++i) {

        int k = int(s[i]) -96;
        sum += k;
    }
    
    cout<<sum;
    
    return 0;
}

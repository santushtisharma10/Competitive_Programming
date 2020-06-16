#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    getline(cin, s);
    
    int l = s.size();
    
    long long int count = 0;
    
    for(int i = 0; i < l; ++i) {

        if(s[i] == s[i+1]) {

            count++;
            i++;
        }
    }
    
    cout<<count;
    
    return 0;
}

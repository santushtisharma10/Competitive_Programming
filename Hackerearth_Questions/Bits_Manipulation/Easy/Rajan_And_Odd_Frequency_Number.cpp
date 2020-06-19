#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
     
    cin>>n;
     
    int x = 2*n +1;
     
    int a[x];
     
    for(int i = 0; i < x; ++i) {

        cin>>a[i];
    }     
    
    int flag = 0;
     
    for(int i = 0; i < x; ++i) {

        flag ^= a[i];
    }
    
    cout<<flag;
    
    return 0;
}

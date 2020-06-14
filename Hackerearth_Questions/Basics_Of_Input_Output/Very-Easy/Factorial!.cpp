#include<iostream>
using namespace std;

int main() {
    
    int p = 1;

    int n;

    cin>>n;
    
    for(int i = n; i > 0; --i) {
        
        p *= i;
    }
    
    cout<<p;

    return 0;
}

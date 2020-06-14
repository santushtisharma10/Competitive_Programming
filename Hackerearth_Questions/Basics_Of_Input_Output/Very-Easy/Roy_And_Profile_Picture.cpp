#include <bits/stdc++.h>
using namespace std;

int main() {

    int s;
    
    cin>>s;
    
    int q;
    
    cin>>q;
    
    while(q--) {

       int l, b;
       
       cin>>l>>b;
       
       if(s > l || s > b) {

           cout<<"UPLOAD ANOTHER\n";
       }
       
       else {

           if(l == b) {
               
               cout<<"ACCEPTED\n";
           }
           else {
               
               cout<<"CROP IT\n";
           }
       }
    }
    
    return 0;
}

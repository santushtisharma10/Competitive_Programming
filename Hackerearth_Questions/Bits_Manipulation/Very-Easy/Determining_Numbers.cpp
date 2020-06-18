#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    
    cin>>n;
    
    long int a[n];
    
    for(int i = 0; i < n; ++i) {

        cin>>a[i];
    }
    
    sort(a, a+n);
    
    int res = 0;

    for(int i = 0; i < n; ++i) {

        res ^= a[i];
    }
    
    int temp = res;
    
    int k = 0;
    
    while((temp&1) != 1) {

        temp = temp>>1;
        k++;
    }

    int mask = 1<<k;
    int firstno = 0;
    
    for(int i = 0; i < n; ++i) {

        if(mask&a[i]) {
            
            firstno ^= a[i];
        }
    }
    
   int secno = res^firstno;
   
   if(secno > firstno) {
       
       cout<<firstno<<" "<<secno;
   }
   else {
       
       cout<<secno<<" "<<firstno;
   }
   return 0;
}

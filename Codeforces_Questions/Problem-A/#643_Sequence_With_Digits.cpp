//Codeforces Round #643 (Div. 2)-> problem: (A) Sequence with Digits

#include <bits/stdc++.h>
using namespace std;

int maxdigit(long long int a) {
    
    int ans = a%10;
    a = a/10;
    
    while(a) {
        
        int temp = a%10;
        if(temp > ans)
            ans = temp;
        a = a/10;
    }
    return ans;
}
int mindigit(long long int a) {
    
    int ans = a%10;
    a = a/10;
    while(a) {
        
        int temp = a%10;
        if(temp < ans) {
            ans = temp;
        }
        a = a/10;
    }
    return ans;   
}
int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int a, k;
        
        cin>>a>>k;
        
        for(int i = 1; i < k; ++i) {
            
            if(mindigit(a) == 0)
                break;
                
            //cout<<a<<" "<<maxdigit(a)<<" "<<mindigit(a)<<"\n";    
            a = a + maxdigit(a)*mindigit(a);
            
        }
        
        cout<<a<<"\n";
        
    }
	return 0;
}


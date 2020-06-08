//Codeforces Round #642 (Div. 3)-> problem: (C) Board Moves

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--)
 {   
    long long int n;
    
    cin>>n;
    
    long long int ans = 0;
    
    for(int i = n; i >=3; i -= 2) {
        
        ans += 8*pow(i/2,2);
    }
    
    cout<<ans<<"\n";
}
    
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a, m;
    
    cin>>a>>m;
    
    int flag = 0;
    
    unordered_map<int, int> mp;
    
    int sum = a + a%m ;
    
    mp[a%m]++;
    
    while(sum%m) {
        
        mp[sum%m]++;
        
        if(mp[sum%m] > 1) {
            
            flag = 0;
            break;
        }
        sum = sum + sum%m;
        
    }
    
    if(sum%m == 0) {
        
        flag = 1;
    }
    
    if(flag) {
        
        cout<<"YES";
    }
    else {
        
        cout<<"NO";
    }
    
	return 0;
}

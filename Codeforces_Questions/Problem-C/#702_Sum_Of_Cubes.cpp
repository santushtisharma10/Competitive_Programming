#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        long long int n;

        cin>>n;

        long long int num1 = cbrt(n);
        long long int num2 = cbrt(n-(pow(num1, 3)));

        string ans = "NO";
        
        num1 = min(num1, num2);
        num2 = max(num2, num1);

        while(pow(num1, 3)+pow(num2, 3) < n) {

            num1++;
            num2 = cbrt(n-(pow(num1, 3)));
        }


        if(num1 > 0 && num2 > 0) {
            
            if(pow(num1, 3) + pow(num2, 3) == n) {

                ans = "YES";
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}

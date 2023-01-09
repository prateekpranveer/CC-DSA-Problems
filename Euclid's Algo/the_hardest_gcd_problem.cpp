#include <bits/stdc++.h>
#define inta long long int
using namespace std;

inta gcd(inta a, inta b) {
    if (b==0) return a;
    return gcd(b, a%b);
}

// To make an array co_prime by dividing with a divisor less than k, we need to check if the factors of gcd of all the elements in the array is greater or smaller than k.

int main() {
    inta t;
    cin>>t;
    while(t--) {
        inta n, k;
        cin>>n>>k;
        inta arr[n];
        for (inta i = 0; i<n; i++) {
            cin>>arr[i];
        }
        inta gc = arr[0];
        for (int i = 1; i<n; i++) {
            gc = gcd(gc,arr[i]);
        }
        if (n==1) cout << "YES" << endl;
        else if (gc==1) cout << "YES" << endl;
        else {
            map<inta,inta>mp;
            for (inta i = 2; i*i<=gc; i++) {
                if (gc%i==0) {
                    while(gc%i==0) {
                        mp[i]++;
                        gc/=i;
                    }
                }
            }
            if (gc>1) mp[gc]++;
            auto it = mp.rbegin();
            if (it->first>k) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
	// your code goes here
	return 0;
}

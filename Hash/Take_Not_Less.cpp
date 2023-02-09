#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        map<int,int>um;
        for (ll i = 0; i<n; i++) {
            cin>>arr[i];
            um[arr[i]]++;
        }
        int turn = 1;
        for (auto x:um) {
            if (x.second%2==1) {
                turn = 0;
                break;
            }
        }
        if (!turn) cout << "Marichka" << endl;
        else cout << "Zenyk" << endl;
    }
	// your code goes here
	return 0;
}

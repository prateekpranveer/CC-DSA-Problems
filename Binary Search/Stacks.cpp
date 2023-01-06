// https://www.codechef.com/submit-old/STACKS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int arr[n];
        for (int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        vector<int>v;
        v.push_back(arr[0]);
        for (int i = 1; i<n; i++) {
            if (upper_bound(v.begin(), v.end(), arr[i])!=v.end()) {
                v[upper_bound(v.begin(), v.end(), arr[i])-v.begin()] = arr[i];
            }
            else{
                v.push_back(arr[i]);
            }
        }
        cout << v.size()<< " ";
        for (auto x:v) {
            cout << x << " ";
        }
        cout << endl;
    }
	return 0;
}

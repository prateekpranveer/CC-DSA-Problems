#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if (s=="1" || s=="10") {
	        cout << "NO" << endl;
	        continue;
	    }
	    if (s=="1001") {
	        cout << "YES" << endl;
	        continue;
	    }
	    bool ans = false;
	    int ct = 0;
	    for (int i = 0; i<n; i++) {
	        if (s[i]=='1') ct++;
	    }
	    if (ct<=3) ans = true;
	    if (ans) cout << "YES" << endl;
	    else cout << "NO" << endl;
	    
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ct = 0;
        for (int i = 0; i<n; i++) {
            for (int x = 0; x<n; x++) {
                if (s[i]==s[x] && i!=x) ct++;
                if (ct==2) break;
            }
            if (ct==2) break;
        }
        if (ct==2) cout << n-ct << endl;
        else cout << -1 << endl;
    }
	// your code goes here
	return 0;
}

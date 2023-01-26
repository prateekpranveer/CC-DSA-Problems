#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        unordered_set<int>s;
        for (int i = a; i<=b; i++) {
            s.insert(i);
        }
        for (int i = c; i<=d; i++) {
            s.insert(i);
        }
        cout << s.size() << endl;
    }
	// your code goes here
	return 0;
}
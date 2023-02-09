#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        vector<int>v;
        int n; 
        cin>>n;
        deque<int>dq;
        for (int i = 2; i<=n; i++) {
            v.push_back(i);
        }
        v.push_back(1);
        for (auto x:v) {
            cout << x << " ";
        }
        cout << endl;
    }
	// your code goes here
	return 0;
}

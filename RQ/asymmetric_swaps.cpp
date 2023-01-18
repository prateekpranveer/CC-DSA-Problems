#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
     cin>>t;
     while (t--) {
         int n;
          cin>>n;
          vector<int>a1;
          for (int i = 0; i<2*n; i++) {
              int a;
              cin>>a;
              a1.push_back(a);
          }
          
          sort(a1.begin(), a1.end());
          
          int ans = INT_MAX;
          for (int i = 0; i<n+1; i++) {
              ans = min (ans, (a1[n-1+i]-a1[i]));
          }
          cout << ans << endl;
         
     }
	// your code goes here
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n; 
         cin>>n;
         int arr[n];
         for (int i = 0; i<n; i++) {
             cin>> arr[i];
         }
         int gc = arr[0];
         for (int i = 0; i<n; i++) {
             gc = gcd(gc, arr[i]);
             if (gc==1) break;
         }
         if (gc==1) {
             cout << n << endl;
         }
         else {
             cout << -1 << endl;
         }
    }
	// your code goes here
	return 0;
}

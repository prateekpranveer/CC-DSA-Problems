#include <iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while (t--) {
        int n,y;
        cin>>n>>y;
        int arr[n];
        for (int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        int ans = arr[0];
        for (int i = 1; i<n; i++) {
            ans|=arr[i];
        }
        cout << ans << endl;
    }
    
	// your code goes here
	return 0;
}

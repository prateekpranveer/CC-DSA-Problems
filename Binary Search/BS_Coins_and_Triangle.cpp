// https://www.codechef.com/problems/TRICOIN

#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int start = 1;
        int end = n;
        int ans = 0;
        while (start<=end){
            int mid  = (start + (end-start))/2;
            int current = (mid * (mid+1))/2;
            if (current<=n) {
                ans = mid;
                start = mid;
            }
            else {
                end = mid-1;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll t;
     cin>>t;
     while (t--) {
         ll x,y;
         cin>>x>>y;
         ll ans = x*y-x-y;
         if (ans<=0) ans = 5*x*y-x-y;
         cout << ans << endl;
     }
	// your code goes here
	return 0;
}

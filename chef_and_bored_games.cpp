#include <iostream>
using namespace std;

int main() {
    int t;
     cin>>t;
     while (t--) {
         int n;
         cin>>n;
         int x = 0;
         while (n>0) {
             x+=(n*n);
             n-=2;
         }
         cout << x<< endl;
     }
	return 0;
}

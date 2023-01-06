// (https://www.codechef.com/submit/COVID_19)

#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x = (a%2==0) ? a/2 : (a+1)/2;
        int y = (b%2==0) ? b/2 : (b+1)/2;
        cout << x*y << endl;
    }
	return 0;
}

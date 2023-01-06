#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int sum = 0;
        int i = 1;
        int height = 0;
        while(sum<=n){
            sum += i;
            i++;
            height++;
        }
        cout << height-1 << endl;
    }
	return 0;
}
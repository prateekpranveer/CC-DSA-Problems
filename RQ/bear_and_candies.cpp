#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b;
         cin>>a>>b;
         int x = 1;
         while (true) {
            if (x%2!=0) {
                a-=x;
                if (a<0) {
                    cout << "Bob" << endl;
                    break;
                }
            }
            else {
                b-=x;
                if (b<0) {
                    cout << "Limak" << endl;
                    break;
                }
            }
            x++;
        }
    }
	// your code goes here
	return 0;
}

// https://www.codechef.com/submit/XYSTR

#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n = s.size();
        int i = 0;
        int pr = 0;
        while(i<n){
            if (s[i]!=s[i+1]){
                if (i!=s.size()-1)
                    pr++;
                i+=2;
            }
            else{
                i+=1;
            }
        }
        cout << pr << endl;
    }
	return 0;
}
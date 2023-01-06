// (https://www.codechef.com/submit/STRP)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int i = 0;
        int ct = 0;
        while(i<n){
            if (s[i]==s[i+1]){
                ct+=1;
                i+=2;
            }
            else{
                ct+=1;
                i+=1;
            }
        }
        
        cout << ct << endl;
    }
	return 0;
}

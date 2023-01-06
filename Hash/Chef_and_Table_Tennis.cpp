#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
       map<char,int>m;
       string ans;
       for (int i = 0; i<s.size(); i++){
           m[s[i]]++;
       }
       if (m['1']>m['0']) ans = "WIN";
       else if (m['1']==m['0']){
           int zero = 0;
           int one = 0;
            for (int i = 0; i<s.size(); i++){
                if (one==2) {
                    ans = "WIN";
                    break;
                }
                if (zero == 2){
                    ans = "LOSE";
                    break;
                }
                if (s[i]==0) {
                    one = 0;
                    zero++;
                }
                else {
                    one++;
                    zero = 0;
                }
            }
       }
       else ans = "LOSE";
        cout << ans << endl;
    }
	return 0;
}

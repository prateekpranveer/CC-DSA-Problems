#include <bits/stdc++.h>
using namespace std;

//     110010011101

int main() {
    int t; cin>>t;
    while (t--) {
        int n;
        cin>>n;
         string s;
         cin>>s;
         s+='0';
         if (s[0] == '0') {
             int maxi = 0;
             int ct = 0;
             for (int i = 0; i<n+1; i++) {
                 if (s[i]=='1') {
                     ct++;
                 }
                 if (s[i]=='0') {
                     maxi = max(ct,maxi);
                     ct = 0;
                 }
             }
             cout << maxi << endl;
         }
         else {
             int first_zero = 0;
             int ip = 0;
             for (int i = 0; i<n+1; i++) {
                 if (s[i]=='1') ip++;
                 else {
                     first_zero = i;
                     break;
                 }
             }
             
             int maxi = 0;
             int ct = 0;
             for (int i = first_zero; i<n+1; i++) {
                 if (s[i]=='1') {
                     ct++;
                     
                 }
                 if (s[i]=='0') {
                     maxi = max(ct,maxi);
                     ct = 0;
                 }
             }
             cout << maxi+ip << endl;
             
         }
    }
	// your code goes here
	return 0;
}
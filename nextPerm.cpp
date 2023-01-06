#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        deque<int>dq;
        for (int i = n; i>=1; i--){
            if (i%2!=0){
                dq.push_back(i);
            }
        }
        
        for (int i = 1; i<=n; i++){
            if (i%2==0){
                dq.push_back(i);
            }
        }
        
        while(!dq.empty()){
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << endl;
    }
	// your code goes here
	return 0;
}

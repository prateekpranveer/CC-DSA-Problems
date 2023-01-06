#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        priority_queue<pair<int,int>>pq;
        while(n--) {
            int a,b;
            cin>>a>>b;
            pair<int,int>pr = {b,a};
            pq.push(pr);
        }
        
        while (!pq.empty()) {
            auto sp = pq.top();
            if (sp.second>x){
                pq.pop();
            }
            else {
                break;
            }
        }
        
        cout << pq.top().first << endl;
    }
	// your code goes here
	return 0;
}

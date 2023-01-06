// https://www.codechef.com/submit/PROGLANG

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while (t--){
	    int ans = 0;
	    int a,b, a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    vector<pair<int,int>>v;
	    v.push_back({a,b});
	    v.push_back({a1,b1});
	    v.push_back({a2,b2});
	    auto v_main = v[0];
	    int x = v_main.first;
	    int y = v_main.second;
	    for (int i = 1; i<v.size(); i++){
	        int c = v[i].first;
	        int d = v[i].second;
	        if (x==c && y==d or y==c && x==d) ans = i;
	    }
	    cout << ans << endl;
	}
	return 0;
}

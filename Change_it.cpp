// https://www.codechef.com/submit/CHNGIT

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i<n; i++){
            cin>>arr[i];
        }
        map<int,int>m;
        for (int i = 0; i<n; i++){
            if (m.find(arr[i])==m.end()){
                m.insert({arr[i],1});
            }
            else{
                m[arr[i]]++;
            }
        }
        int maxi = 0;
        for (auto x:m){
            maxi = max(maxi,x.second);
        }
        cout << n-2 << endl;
    }
}
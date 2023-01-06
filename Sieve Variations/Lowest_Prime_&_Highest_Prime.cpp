#include <iostream>
#include <vector>
using namespace std;

const int N = 1e7 + 10;

vector<bool> isPrime(N,1);
vector<int>lp(N,0), hp(N,0);

int main () {
     isPrime[0] = isPrime[1] = false;
     for (int i = 2; i<N; i++) {
        if (isPrime[i]==true) {
            lp[i] = hp[i] = i;
            for (int j = 2*i; j<N; j+=i) {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j]==0) {
                    lp[j] = i;
                }  
            }
        }
     }

     for (int i = 1; i<7; i++) {
        cout << lp[i] << " ";
     }
    int num;
    cin>>num;
    vector<int>prime_factors;
    while(num>1) {
        int prime_factor = lp[num];
        while (num%prime_factor == 0) {
              num/=prime_factor;
              prime_factors.push_back(prime_factor);  
        }
    }
    for (auto x:prime_factors) {
        cout << x << " ";
    }
}
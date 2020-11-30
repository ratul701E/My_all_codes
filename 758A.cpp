#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    vector<ll> ppl;
    ll cost = 0;
    cin >> n;
    while(n--) {
            int k; cin >> k;
            ppl.push_back(k);
        }
        sort(ppl.begin(),ppl.end());
        ll _max = ppl[ppl.size()-1];
        for(ll i = 0 ; i < ppl.size()-1;i++) {
            if(ppl[i] < _max) {
                cost += _max-ppl[i];
            }
        }
        cout << cost ;

}

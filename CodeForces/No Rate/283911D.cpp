#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() {
    tee
    int t=1;
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n; cin >> n;
    vector<int>v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i]; 
    }

    sort(v.begin(), v.end());
    
    int q; cin >>q;
    int l, r;
    while(q--){
        cin >> l >> r;
        int left = lower_bound(v.begin(), v.end(), l) - v.begin();
        int right = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout << right - left << endl;
    }
}
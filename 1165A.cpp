#include <bits/stdc++.h>
using namespace std;

#define endl "\n" 
#define int long long
#define tee { ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void solve();
int32_t main() 
{
    tee
    int t=1;
    // cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}

void solve(){

    int n, x, y;
    cin >> n >> x >>y;

    string str;cin >> str;
    str = str.substr(n - x ,x);

    int ans =0;
    for (int i = 0; i < x; i++) {
        if(i == x-y-1  ){
            if (str[i] != '1'){
                ans++;
            }
        }else{
            if (str[i] != '0'){
                ans++;
            }
        }
    }
    cout << ans ;
}
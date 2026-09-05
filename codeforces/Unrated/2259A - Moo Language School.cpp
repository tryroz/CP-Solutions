#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    string s;
    cin >> n >> k;
    cin >> s;
    //looping var
    int l = 1;
    int ans = 0;
    int mans = 2;
    for(int i = 0; i < n; i++){
        //cout << l << " ";
        mans = min(mans, (s[i]-'0'));
        if(l < k) l++;
        else if(l >= k){ 
            l=1;
            ans += mans;
            mans = 2;
        }
    }
    cout << ans << endl;
}

int main() {
	int t;
    cin >> t;
    while(t--) solve();
}

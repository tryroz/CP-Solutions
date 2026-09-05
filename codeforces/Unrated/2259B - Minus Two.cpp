#include <bits/stdc++.h>
using namespace std;

void solve(){

	int n; cin >> n;
    vector<int> a(n);
    for(auto &v: a) cin >> v;
    //divide into odds and evens
    vector<int> e;
    vector<int> ep;
    int oans = 0, eans = 0, ans = 0;
    for(auto b: a){
        if(b%2==0) e.push_back(b/2);
        else oans++;
    }
    //find eans
    sort(e.begin(), e.end());
    //find differences in a new array
    int eeans = 0, oeans = 0;
    for(auto b: e){
        if(b % 2 == 0) eeans++;
        else oeans++;
    }
    eans = max(oeans, eeans);
    //for(auto y: e) cout << y << " ";
    ans = max(oans, eans);
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
    while(t--){
        solve();
    }
}

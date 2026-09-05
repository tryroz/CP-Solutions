#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &v: a) cin >> v;
    vector<int> s;
    int nno = 0;
    for(auto b: a){
        if(b != 0) s.push_back(b);
        if(b == -1) nno++;
    }
    if(nno > 0){
    //for(auto y: s) cout << y << " ";
    //cout << endl;
    //always replace first and last -1's with 1
    vector<int> sa = s;
    vector<int> ans; // derive this from s and sa
    if(s[0] == -1) sa[0] = 1;
    if(s[s.size()-1] == -1) sa[s.size()-1] = 1;
    //replace any bounded -1's with 0's
    for(int i = 1; i < sa.size()-1; i++){
        if(sa[i] == -1) sa[i] = 0;
    }
    //for(auto y: sa) cout << y << " ";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == -1) ans.push_back(sa[i]);
    }
    //cout << endl;
    //for(auto y: ans) cout << y << " ";
    //cout << endl;
    //plg back into a and print that out
    int ia = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == -1){
            a[i] = ans[ia];
            ia++;
        }
    }
    }
    for(auto y: a) cout << y << " ";
    cout << endl;
}

int main() {
	int t; cin >> t;
    while(t--){
        solve();
    }
}

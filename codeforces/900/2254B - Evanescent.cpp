#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    //three pointers where 
    vector<char> a(n);
    for(auto &v: a) cin >> v;
    vector<char> b = a;
    b.erase(unique(b.begin(), b.end()), b.end());
    int ans = b.size();
    //for(auto v: b) cout << v;
    //cout << endl;
    //two types of answers
    bool k = false; //if both i-1 & i+1 indices have the same element
    bool l = false; //if both i-1 & i+1 indices are different elements
    int j;
    for(int i = 1; i < n-1; i++){
        if(a[i-1] != a[i] && a[i+1] != a[i]){
            if(a[i-1] == a[i+1]){
                k = true;
                j = i;
                //best case so break
                break;
            }   
            else if(!k){
                l = true;
                j = i;
            }
        }
    }
    if(k){
        a.erase(a.begin()+j);
        a.erase(unique(a.begin(), a.end()), a.end());
        ans = a.size();
    }
    else if(l){
        b.erase(b.begin()+j);
        ans--;
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
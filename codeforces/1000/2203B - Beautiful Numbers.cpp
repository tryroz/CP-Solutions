#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n; cin >> n;
    vector<int> a;
    int ans = 0;
    int sum = 0;
    for(auto s: n){a.push_back(s-'0'); sum += s-'0';}
    //add another element
    a.push_back(a[0]-1);
    sort(a.begin()+1, a.end());
    for(int i = a.size()-1; i > 0; i--){
        if(sum > 9){
            sum -= a[i];
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
    while(t--) solve();
}

#include <bits/stdc++.h>
using namespace std;

char next(char a, char b){
    if(a == b){
        if(a == '0')
            return '1';
        else return '0'; 
    }
    if(a == '0' && b == '1') return '1';
    else return '0';
}

bool comparison(char a, char b){
    //cout << a << " " << b << endl;
    if(a == b) return true;
    if(a == '?') return true;
    else return false;
}

void solve(){
    int n; cin >> n;
    string b; cin >> b;
    int ans = 4;
    //starting can only be 00,01,11,10
    //then just follow the doubling pattern
    //generate patterns
    //p1,p2,p3,p4
    //check if the string works or not
    vector<string> p = {"01", "10", "11", "00"};
    for(auto &v: p){
        for(int i = 1; i < n-1; i++){
            v += next(v[i-1], v[i]);
        }
    }
    for(auto &v: p){
        //cout << b << " " << v << endl;
        for(int i = 0; i < n; i++){
            if(!comparison(b[i], v[i])){
                ans--;
                break;
            }
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t;
    while(t--) solve();
}

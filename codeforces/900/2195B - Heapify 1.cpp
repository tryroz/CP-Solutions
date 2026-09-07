#include <bits/stdc++.h>
using namespace std;

bool works(vector<int> *t){
    //sort and check if increases by order of 2, if not then return false
    bool ans = true;
    //two pointers
    for(int i = 1; i < (*t).size(); i++){
        if((*t)[i-1]*2 != (*t)[i]){
            ans = false;
            break;
        }
    }
    return ans;
}

void solve(){
    int n; cin >> n;
    bool ans = true;
    vector<int> a(n);
    for(auto &v: a) cin >> v;
    for(int i = 1; i <= n; i++){
        vector<int> t;
        if(i <= n/2 && i%2==1){
            for(int j = i; j <= n; j*=2){
                t.push_back(a[j-1]);
            }
            sort(t.begin(), t.end());
            ans = ans && works(&t);
        }
        else if(i % 2 == 1){
            if(i != a[i-1]){
                //cout << i << " = " << a[i-1] << " didn't work" << endl; 
                ans = ans&&false;
                break;
            }
        }
    }
    cout << ((ans)?"YES":"NO") << endl;
}

int main() {
	int t; cin >> t;
    while(t--) solve();
}

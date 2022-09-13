#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    freopen("CwoodM.Inp", "r", stdin);
    freopen("CwoodM.Out", "w", stdout);
    ll n,x,s,a,ans = 0;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for(ll i = 1; i <= n; i++){
    cin>>x>>n;
        cin>>a;
        q.push(a);
    }
    while(q.size() > 1){
        s = 0;
        s += q.top();
        q.pop();
        s += q.top();
        q.pop();
        ans += s;
        q.push(s);
    }
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
priority_queue<int> q;
priority_queue<int, vector<int> , greater<int> > p;
ll x,y,z,n,t,s;
map<ll,ll> a;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("PPStone.inp","r",stdin);
    freopen("PPStone.out","w",stdout);
    cin>>n;
    for(ll i = 1; i <= n; i++)
        cin>>a[i];
     cin>>t;
     while(t--)
     {
         cin>>x;
         if(x==1)
            {cin>>y; q.push(a[y]);}
         else
            {
                cout<<q.top()<<'\n'; q.pop();
            }
     }
}

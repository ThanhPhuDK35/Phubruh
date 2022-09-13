#include<bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

bool cmp(ii a, ii b)
{
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

multiset<int> s;
multiset<int> :: iterator it;
ii a[2000001];

int main()
{
    freopen("Chonsach.inp","r",stdin);
    freopen("chonsach.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a+1, a+1+n, cmp);
    for(int i=1; i<=n; i++)
    {
        s.insert(a[i].second);
        it = s.lower_bound(a[i].second);
        it++;
        if(it != s.end()) s.erase(it);
    }
    cout<<s.size();
}

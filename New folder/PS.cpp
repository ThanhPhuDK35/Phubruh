#include<bits/stdc++.h>
using namespace std;
int n;
pair<int, int> d[100001];

bool compare(pair<int, int> a, pair<int, int> b)
{
    int mb, ma, tb, ta;
    ta=a.first; ma=a.second;
    tb=b.first; mb=b.second;
    if(ta*mb < tb*ma) return true;
    if((ta*mb) == (tb*ma)) return (ta < tb);
    return false;
}

int main()
{
    freopen("PS.inp","r",stdin);
    freopen("PS.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>d[i].first>>d[i].second;
    }
    sort(d+1, d+1+n, compare);
    for(int i=1; i<=n; i++)
    {
        cout<<d[i].first<<" "<<d[i].second<<"\n";
    }
}
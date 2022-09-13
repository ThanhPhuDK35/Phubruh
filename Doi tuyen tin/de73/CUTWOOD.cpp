#include<bits/stdc++.h>
using namespace std;
long long t, n, s=0, x, tong=0;
multiset<long long> a;

int main()
{
    freopen("CUTWOOD.Inp", "r", stdin);
    freopen("CUTWOOD.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        tong=0;
        s=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            a.insert(x);
        }
        while(a.size()!=1)
        {
            s=0;
            s+=*a.begin();
            a.erase(a.begin());
            s+=*a.begin();
            a.erase(a.begin());
            tong+=s;
            a.insert(s);
        }
        cout<<tong<<'\n';
        a.clear();
    }

}

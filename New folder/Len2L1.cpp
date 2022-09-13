#include<bits/stdc++.h>
using namespace std;
int n;
map<string, int> mp;
string x;

bool check(string x, string y)
{
    if(x[0] == y[0] && x[1] != y[1]) return true;
    if(x[0] != y[0] && x[1] == y[1]) return true;
    return false;
}
void solve()
{
    long long ans=0;
    string x, y;
    for(char a='a'; a<='z'; a++)
        for(char b='a'; b<='z'; b++)
            for(char c='a'; c<='z'; c++)
                for(char d='a'; d<='z'; d++)
                {
                    x=y="aa";
                    x[0]=a; x[1]=b;
                    y[0]=c; y[1]=d;
                    if(check(x, y))
                        ans += 1LL * mp[x]*mp[y];
                }
    cout<<ans/2<<"\n";
}

int main()
{
    freopen("Len2L1.inp","r", stdin);
    freopen("Len2L1.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        solve();
    }
}

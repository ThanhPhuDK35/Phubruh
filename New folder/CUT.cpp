#include<bits/stdc++.h>
using namespace std;
string s, p, x;

int main()
{
    freopen("CUT.inp","r",stdin);
    freopen("CUT.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>s>>p;
    int n=s.size();
    int m=p.size();
    int ans=0;
    int i = m-1;
    while(i <= n-1)
    {
        x=s.substr(i-m+1, m);
        if(x == p)
        {
            ans++;
            i+=m;
        }
        else i++;
    }
    cout<<ans;
}

#include <bits/stdc++.h>
using namespace std;
string s;
long long n;

int main()
{
    freopen("XAUGON.inp", "r", stdin);
    freopen("XAUGON.out", "w", stdout);
    cin>>s;
    n=s.size();
    cout<<s[0];
    for(int i=1; i<=n; i++)
    {
        if(s[i] != s[i-1])
            cout<<s[i];
    }
}

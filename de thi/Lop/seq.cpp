#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    freopen("SEQ.INP","r",stdin);
    freopen("SEQ.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    if (abs(a-b)==1||a-b==0) cout<<"YES";
    else cout<<"NO";
}
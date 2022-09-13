#include <bits/stdc++.h>
using namespace std;
long long a, b;

int main()
{
    freopen("GAME.inp","r",stdin);
    freopen("GAME.out","w",stdout);
    cin>>a>>b;
    cout<<max(a+(a-1), max(b+b-1, a+b));
}
#include<bits/stdc++.h>
using namespace std;
long long a[1000005], n, s = 0,x;
int main()
{
    freopen("MoveStone.INP","r",stdin);
    freopen("MoveStone.OUT","w",stdout);
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    cin>>n;
    for(int i = 1;i <= n;i++)
        cin>>a[i];
    sort(a + 1, a+ n + 1);
    for(int i = 1;i <= n;i++)
        s += abs(a[n / 2 + 1] - a[i]);
    cout<<s;
}

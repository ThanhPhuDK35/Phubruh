#include <bits/stdc++.h>
using namespace std;

const int base = 1e9+7;
long long sum(int n)
{
    if(n == 0) return 0;
    long long s, num, i;
    s=num=i=0;
    while(num + (i+1) <= n)
    {
        i++;
        num+= i;
        s += i*i;
        s = s%base;
    }
    i++;
    s += (n-num)*i;
    s = s%base;
    return s;
}

int main()
{
    freopen("InStruck.inp", "r", stdin);
    freopen("InStruck.out", "w", stdout);
    int a, b;
    cin>>a>>b;
    int ans = (sum(b) - sum(a-1) + base)%base;
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;
string s;
long long n, ans;

int main()
{
    freopen("LKey1.inp","r",stdin);
    freopen("LKey1.out","w",stdout);
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        ans += abs(s[i-1] - s[i]);
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
long long n, q, a, l, r;
map<long long, long long> s1; map<long long, long long> s2; map<long long, long long> s3;

int main()
{
    freopen("TK123.Inp", "r", stdin);
    freopen("TK123.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        s1[i] = s1[i-1];
        s2[i] = s2[i-1];
        s3[i] = s3[i-1];
        if (a == 1) s1[i]++;
        if (a == 2) s2[i]++;
        if (a == 3) s3[i]++;
    }
    while(q--)
    {
        cin >> l >> r;
        cout << s1[r] - s1[l-1] << " " << s2[r] - s2[l-1] << " " << s3[r] - s3[l-1] << "\n";
    }
}

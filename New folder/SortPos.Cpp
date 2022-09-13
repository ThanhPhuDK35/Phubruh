#include <bits/stdc++.h>
using namespace std;
long long a[200009], s[200009], n;
int main(){
    freopen("SortPos.Inp", "r", stdin);
    freopen("SortPos.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (long long i = 1; i <= n; i++) {cin >> a[i]; s[a[i]] = i;}
    sort(a+1, a+1+n);
    for (long long i = 1; i <= n; i++) cout << s[a[i]] << " ";
}

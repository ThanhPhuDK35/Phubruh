#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int bit[N];

void update(int i) 
{
    for (; i > 0; i -= i & -i) bit[i]++;
}

int getVal(int i) 
{
    int res = 0;
    for (; i < N; i += i & -i) res += bit[i];

    return res;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Nghichthe.inp", "r", stdin);
    freopen("Nghichthe.out", "w", stdout);
    long long n, x;
    long long res = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        res += getVal(x + 1);
        update(x);
    }

    cout << res;
    return 0;
}
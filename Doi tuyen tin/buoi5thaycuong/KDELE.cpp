#include<bits/stdc++.h>
using namespace std;
long long n,k,dem=0;
bool a[10000001];

int main()
{
    freopen("KDELE.Inp", "r", stdin);
    freopen("KDELE.Out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 2; i <= n; i++)
    {
        if(a[i] == 0)
        for(int j = i; j <= n; j+=i)
        {
            if(a[j]==0)
            {
                a[j]=1;
                dem++;
                if(dem==k)
                    cout<<j;
            }
        }
    }
}

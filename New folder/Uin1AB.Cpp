#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,p[100005], x[100005], s, u, k, m, A, B;
int main()
{
    freopen("Uin1AB.inp","r",stdin);
    freopen("Uin1AB.out","w",stdout);
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    cin >> m >> A >> B ;
    for(int i = 1;i <= m;i++)
        cin >> p[i] >> x[i];
    s = 0;
    for(int e = A;e <= B;e++)
    {
        u = e;
        for(int i = 1;i <= m;i++)
        {
            k = 0;
            while(k < x[i] && u % p[i] == 0)
            {
                k ++;
                u = u / p[i];
            }
        }
        if(u == 1) s++;
    }
    cout<<s;
}

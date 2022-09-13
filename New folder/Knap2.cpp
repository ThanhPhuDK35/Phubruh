#include<bits/stdc++.h>
using namespace std;
long long s=0, n, x[1005],a[1005],w1,w2,ans =0,p;
void update()
{
    long long u, v ,s;
    u = v = s = 0;
    for(int i = 1; i <= n; i++)
    {
        u = u + x[i] * a[i];
        s += x[i];
    }
    if(u > w1) return;
    for(int i = 1;i <= n;i++)
    {
        if((v + (1 - x[i])*a[i]) <= w2)
        {
            s += (1 - x[i]);
            v += (1 - x[i]) * a[i];
        }
        else break;
    }
    ans = max(ans, s);
}
void Try(int i)
{
    for(int j = 0; j <= 1;j++)
    {
        x[i] = j;
        if(i == n) update();
        else Try(i+1);
    }
}
int main(){
    freopen("Knap2.inp","r",stdin);
    freopen("Knap2.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>w1>>w2;
    for(int i = 1;i <= n;i++)
         cin>>a[i];
    sort(a + 1,a + 1 + n);
    Try(1);
    cout<<ans;
}

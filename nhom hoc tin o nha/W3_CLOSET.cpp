#include<bits/stdc++.h>
using namespace std;
long long n, a[10000001], m, q[1000001] , dau , cuoi , giua , kqua;

int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=m; i++)
        cin>>q[i];
    sort(a+1, a+1+n);
    for(int i=1; i<=m; i++)
    {
        dau = 1 , cuoi = n;
        kqua = -1e9;
        while(dau <= cuoi)
        {
          giua= (dau + cuoi)/2;
          if(a[giua] <=q[i])
          {
              kqua = max(kqua , a[giua]);
              dau=giua+1;
          }
          else
          {
              kqua=max(kqua , a[giua]);
              cuoi = giua - 1;
          }

        }
        cout << q[i] - kqua << '\n';
    }
}

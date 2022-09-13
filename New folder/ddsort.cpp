#include<bits/stdc++.h>
using namespace std;
int a[1000000];
long long n;

int main()
{
    freopen("ddsort.inp","r",stdin);
    freopen("ddsort.out","w",stdout);
    cin>>n;
    for(int i = 1; i <= n ; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    cout<<a[1]<<' ';
    for(int i = 2; i <= n ; i++)
      {
            if(a[i] != a[i-1])
                cout<<a[i]<<" ";
      }







}

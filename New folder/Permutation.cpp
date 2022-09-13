#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], dem;

int main()
{
    freopen("Permutation.inp","r",stdin);
    freopen("Permutation.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
        a[i]=i;
    int dem = 0;
    do
    {
        dem++;
        for(int i=1; i<=n; i++)
            cout<<a[i]<<' ';
        cout<<'\n';
        if(dem == 2021) break;
     }   while(next_permutation(a+1, a+1+n));

}

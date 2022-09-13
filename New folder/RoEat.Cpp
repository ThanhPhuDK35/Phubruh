#include <bits/stdc++.h>
using namespace std;
int n, k, dem, x;
int main()
{
    freopen("RoEat.INP","r",stdin);
    freopen("RoEat.OUT","w",stdout);
    cin>>n>>k;
    dem=n*(n+1)/2;
    n++;
    while(dem!=k)
    {
        x++;
        dem=dem-n;
        n--;
    }
    cout<<x;

}

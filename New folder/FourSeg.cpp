#include<bits/stdc++.h>
using namespace std;
long long a[10];

int main()
{
    freopen("FourSeg.inp","r",stdin);
    freopen("FourSeg.out","w",stdout);
    for(int i=1; i<=4; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+5);
    cout<<a[1]*a[3];

}

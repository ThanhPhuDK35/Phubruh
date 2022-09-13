#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long a[30],n;
void xuat()
{
for(int k=1;k<=n;k++)
{
cout<<a[k];
}
cout<<"\n";
}
void nhi (ll i)
{
for(int j=0;j<=1;j++)
{
a[i]=j;
if(i==n) xuat();
else nhi(i+1);
}
}
int main()
{
    freopen("BinarySequence.INP","r",stdin);
    freopen("BinarySequence.OUT","w",stdout);
    ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
cin>>n;
nhi(1);
}


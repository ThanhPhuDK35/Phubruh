#include<bits/stdc++.h>
using namespace std;
long long a[100];

int main()
{
    freopen("Ball   .inp","r",stdin);
    freopen("Ball.out","w",stdout);
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1, a+1+3);
    cout<<a[2];
}

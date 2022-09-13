#include<bits/stdc++.h>
using namespace std;
long long n, p, s, a[100001], b[100001], c[1000001];

int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    cin>>n;
    p=n;
    s=1;
    while(p > 0)
    {
        a[s] = p % 2;
        p = p / 2;
        s++;
    }
    for(int i=s-1; i>=1; i--)
    {
        cout<<a[i];
    }
    cout<<"\n";
    p=n;
    s=1;
    while(p > 0)
    {
        b[s] = p % 8;
        p = p / 8;
        s++;
    }
    for(int i=s-1; i>=1; i--)
    {
        cout<<b[i];
    }
    cout<<"\n";

    p=n;
    s=1;
    while(p > 0)
    {
        c[s] = p % 16;
        p = p / 16;
        s++;
    }

    for(int i=s-1; i>=1; i--)
    {
    if(c[i]==10)
        cout<<"A";
    if(c[i]==11)
        cout<<"B";
    if(c[i]==12)
        cout<<"C";
    if(c[i]==13)
        cout<<"D";
    if(c[i]==14)
        cout<<"E";
    if(c[i]==15)
        cout<<"F";
    if(c[i] <= 9 )
        cout<<c[i];
    }




}

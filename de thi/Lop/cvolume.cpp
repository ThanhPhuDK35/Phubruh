#include<bits/stdc++.h>
using namespace std;
long long n, a, b;

int main()
{
    freopen("cvolume.inp","r",stdin);
    freopen("cvolume.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        long long k=abs(b-a), kq=0;
        kq=kq+k/5;
        k=k%5;
        kq=kq+k/2;
        k=k%2;
        kq=kq+k/1;
        k=k%1;
        cout<<kq<<"\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], b[1000001], s, kq, k, check;

int main()
{
    //freopen("BAI3.inp","r",stdin);
    //freopen("BAI3.out","w",stdout);
    cin>>n;
    b[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    s=b[n];
    for(int i=1; i<=n;i++)
    {
        k=0;check=0;
        if(s % b[i] == 0)
        {
            for(int j=1;j<=n;j++)
            {
                k+=a[j];
                if(k==b[i])
                {
                    k=0;
                    check=j;
                }
            }
            if(check==n)
            {
                kq=max(s/b[i],kq);
            }
        }
    }
    long long tong=0;
    cout<<kq<<'\n';
    for(int i=1; i<=n; i++)
    {
        if(tong==0) cout<<i<<" ";
        tong+=a[i];
        if(tong==s/kq) tong=0;
    }
}
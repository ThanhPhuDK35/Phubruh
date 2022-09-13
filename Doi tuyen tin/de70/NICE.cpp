#include<bits/stdc++.h>
#define nmax 10000005
using namespace std;
long long n, tong, s;
string q;
bool isprime[nmax];

void sangNT()
{
    memset(isprime,true,sizeof(isprime));
    isprime[1]=false;
    for(long long i=2;i*i<=nmax;i++)
        if(isprime[i])
            for(long long j=i*i;j<=nmax;j+=i)
                isprime[j]=false;
}

int main()
{
    freopen("NICE.Inp", "r", stdin);
    freopen("NICE.Out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sangNT();
    cin>>n;
    while(n--)
    {
        cin>>q;
        tong = 0;
        int m = 0;
        for(int i=0; i < q.size(); i++)
        {
            tong = tong + (q[i]-48);
            m=max(m, q[i] - 48);
        }
        tong=tong*10 + m;
        if(isprime[tong] == true)
        {
            cout<<tong<<" ";
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
long long n, s, m;
bool nt[10000009];

void sangnto()
{
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for (long long i = 2; i <= sqrt(10000000); i++) 
         for(long long j = i*i ; j <= 10000000; j+=i) 
              nt[j]=false;
}

int main()
{
    freopen("STP.inp","r",stdin);
    freopen("STP.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    sangnto();
    cin>>n;
    s=0;
    if(n >= 4)
    for(int i=4; i<=n; i++)
    {
        for(int j=2; j<=i; j++)
        {
            if(nt[j] == true && nt[i-j] == true)
            {
                s++;
                break;
            }
        }
    }
    cout<<s;
}
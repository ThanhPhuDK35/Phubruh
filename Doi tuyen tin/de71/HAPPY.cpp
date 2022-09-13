#include<bits/stdc++.h>
#define nmax 100005
using namespace std;
long long n, bc, s, dem, a[10000001], ans;
set<long long, greater<long long>> st;
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
    //freopen("HAPPY.inp","r",stdin);
    //freopen("HAPPY.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sangNT();
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0 || isprime[i] == true)
        {
            st.insert(i);
        }
    }
    cout<<st.size()<<"\n";
    for(set<long long>::iterator i = st.begin(); i != st.end(); i++)
    {
        cout<<*i<<" ";
    }
}

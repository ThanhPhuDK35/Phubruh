#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10000001];
multiset<long long, greater<long long>> st;
map<long long, long long> e;
multiset<long long>::iterator s, s1;
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        e[a[i]]++;
        st.insert(a[i]);
    }
    long long ans=0, dem=0;
    for(s=st.begin(); s != st.end(); s++)
    {
        ans=ans + *s;
        e[*s]--;
        if(e[*s] == 0)
        {
            st.erase(*s);
        }
        long long b=*s - k;
        for(s1=s ; s1 != st.end(); s1++)
        {
            if(*s1 <= b)
            {
                b=*s1 - k;
                e[*s1]--;
                if(e[*s1] == 0)
                {
                    st.erase(*s);
                }
            }
        }
    }
    cout<<ans;
}

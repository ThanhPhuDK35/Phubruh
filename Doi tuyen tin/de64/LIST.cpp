#include<bits/stdc++.h>
using namespace std;
multiset<long long> st;
map<long long, long long> m;
char s;
long long n, tong=0;

int main()
{
    freopen("LIST.inp","r",stdin);
    freopen("LIST.out","w",stdout);
    while(cin>>s)
    {
        if(s == '+')
        {
            cin>>n;
            if(st.size() < 15000)
            {
                st.insert(n);
            }
        }
        if(s == '-')
        {
            if(st.size() != 0)
            {
                long long x=*(st.rbegin());
                st.erase(x);
            }
        }
    }
    cout<<st.size()<<"\n";
    set<long long>::reverse_iterator t;
    for(t=st.rbegin(); t != st.rend(); t++)
    {
        cout<<*t<<"\n";
    }
}
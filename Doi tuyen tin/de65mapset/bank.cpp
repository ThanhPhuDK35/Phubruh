#include<bits/stdc++.h>
using namespace std;
long long n, k, p, m[10000001];
set<long long> st; 

int main()
{
    freopen("BANK.inp","r",stdin);
    freopen("BANK.out","w",stdout);
    while(cin>>n)
    {
        if(n == 0) break;
        if(n == 1)
        {
            cin>>k>>p;
            m[p]=k;
            st.insert(p);
        }
        if(n == 2)
        {
            if(st.size() == 0) cout<<"0"<<"\n";
            else
            {
                cout<<m[*st.rbegin()]<<"\n";
                st.erase(*st.rbegin());
            }
        }
        if(n == 3)
        {
            if(st.size() == 0) cout<<"0"<<"\n";
            else
            {
                cout<<m[*st.begin()]<<"\n";
                st.erase(*st.begin());  
            }
        } 
    }
    return 0;
}
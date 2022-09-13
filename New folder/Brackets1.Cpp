#include<bits/stdc++.h>
using namespace std;
long long n , dem=1e18;
string s;
stack<long long> st;

bool solve(string s)
{
    int n = (int)s.size();
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '(')
            st.push(i);
        else
        {
            if (st.empty()) return false;
            st.pop();
        }
    }
    if (!st.empty()) return false;
    return true;
}

int main()
{
    freopen("BRACKETS1.Inp", "r", stdin);
    freopen("BRACKETS1.Out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(solve(s)==true) 
            cout<<1<<'\n';
        else 
            cout<<0<<'\n';
    }
}

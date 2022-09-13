#include<bits/stdc++.h>
using namespace std;
long long c,x;
set<long long> s;
set<long long,greater<long long>> snguoc;
set<long long>::iterator it;
int main()
{
    freopen("CPPSET.inp","r",stdin);
    freopen("CPPSET.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    while(cin>>c)
    {
        if (c==0) break;
        if (c==1) cin>>x,s.insert(x),snguoc.insert(x);
        if (c==2) cin>>x,s.erase(x),snguoc.erase(x);
        if (c==3)
        {
            if (s.empty()) cout<<"empty";
            else cout<<*s.begin();
            cout<<'\n';
        }
        if (c==4)
        {
            if (snguoc.empty()) cout<<"empty";
            else cout<<*snguoc.begin();
            cout<<'\n';
        }
        if (c==5)
        {
            cin>>x;
            if (s.empty()) cout<<"empty"<<'\n';
            else
            {
                it=s.upper_bound(x);
                if (it!=s.end()) cout<<*it;
                else cout<<"no";
                cout<<'\n';
            }
        }
        if (c==6)
        {
            cin>>x;
            if (s.empty()) cout<<"empty"<<'\n';
            else
            {
                it=s.lower_bound(x);
                if (it!=s.end()) cout<<*it;
                else cout<<"no";
                cout<<'\n';
            }
        }
        if (c==7)
        {
            cin>>x;
            if (snguoc.empty()) cout<<"empty"<<'\n';
            else
            {
                it=snguoc.upper_bound(x);
                if (it!=snguoc.end()) cout<<*it;
                else cout<<"no";
                cout<<'\n';
            }
        }
        if (c==8)
        {
            cin>>x;
            if (snguoc.empty()) cout<<"empty"<<'\n';
            else
            {
                it=snguoc.lower_bound(x);
                if (it!=snguoc.end()) cout<<*it;
                else cout<<"no";
                cout<<'\n';
            }
        }
    }
}

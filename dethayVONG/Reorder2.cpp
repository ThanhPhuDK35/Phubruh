#include <bits/stdc++.h>
#define ll long long
#define rct ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string s;
map <ll,ll> mp;
ll dem=0,dem1=0,dem2=0;
int main()
{
    rct;
    cin>>s;
    for (int i=0; i<s.size(); i++) mp[s[i]]++;
    sort(s.begin(),s.end());
    for (int i=0; i<s.size(); i++)
    {
        if (mp[s[i]]%2==0&&s[i]!=s[i-1]) dem1++;
        if (s[i]!=s[i-1]) dem2++;
    }
    ll x=abs(dem1-dem2);
    if (x==1||x==0)
    {
        string s1,s2,s3,s4;
        for (int i=0; i<s.size(); i++)
        {
            if(i%2==0 && mp[s[i]]>1) s1+=s[i];
            else if (i%2==1 && mp[s[i]]>1) s2+=s[i];
            else if (mp[s[i]] == 1) s4+=s[i];
        }
        for (int i=s2.size()-1; i>=0; i--) s3+=s2[i];
        cout<<s1+s4+s3;
    }
    else cout<<"no";
}

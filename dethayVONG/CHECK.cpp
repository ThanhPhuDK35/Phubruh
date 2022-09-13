#include<bits/stdc++.h>
using namespace std;
string s;
map<long long, long long> mp;

int main()
{
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    sort(s.begin(), s.end());
    long long dem1=0, dem2=0;
    for(int i=0; i<s.size(); i++)
    {
        if(mp[s[i]]%2 == 0 && s[i] != s[i-1])
        {
            dem1++;
        }
        if(s[i] != s[i-1])
        {
            dem2++;
        }
    }
    long long x=abs(dem1-dem2);
    if(x <= 1)
    {
        string s1, s2, s3, s4;
        for(int i=0; i<s.size(); i++)
        {
            if(i%2 == 0 && mp[s[i]] > 1) s1+=s[i];
            else if(i%2 == 1 && mp[s[i]] > 1) s2 += s[i];
            else if(mp[s[i]] == 1)  s4+=s[i];
        }
        for(int i=s2.size()-1; i>=0; i--) s3+=s2[i];
        cout<<s1+s4+s3;
    }
    else
        cout<<"no";
}

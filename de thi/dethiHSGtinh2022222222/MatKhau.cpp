#include<bits/stdc++.h>
using namespace std;
long long n;
string s, ans;

int main()
{
    freopen("MatKhau.inp","r",stdin);
    freopen("MatKhau.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    ans="";
    while(n--)
    {
        cin>>s;
        sort(s.begin(), s.end());
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != s[i+1] && s[i] != s[i-1])
            {
                ans=ans+s[i];
            }
        }
    }
    cout<<ans;
}

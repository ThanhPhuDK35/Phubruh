#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
string s;
int main()
{
    freopen("SameDigitsMin.inp","r",stdin);
    freopen("SameDigitsMin.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
            cin>>s;
            string r="",q="", e="", x="";
            for(int i = 1;i <= s.length();i++)
            {
                r += s[0];
                q += s[0]-1;
                e += "0";
                if(i>1)
                x += "9";
            }
            if(r<=s) cout<<r<<"\n";
            else
            {
                if(q == e)
                    cout<<x<<"\n";
                else
                    cout<<q<<"\n";
            }
    }
}


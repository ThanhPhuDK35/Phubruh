#include<bits/stdc++.h>
using namespace std;
long long n;
string s;

int main()
{
    freopen("SameDigits.inp","r",stdin);
    freopen("SameDigits.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
            cin>>s;
            string r="",q="";
            for(int i = 1;i <= s.length();i++)
            {
                r += s[0];
                q += s[0]+1;
            }
            if(r>=s) cout<<r<<"\n";
            else cout<<q<<"\n";
    }
}

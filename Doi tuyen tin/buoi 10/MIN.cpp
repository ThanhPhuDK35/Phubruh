#include<bits/stdc++.h>
using namespace std;
long long k, e, j;
string s, n;

int main()
{
    //freopen("MIN.inp","r",stdin);
    //freopen("MIN.out","w",stdout);
    cin>>k>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '1' || s[i]== '2' || s[i] == '3' || s[i]=='4' || s[i]=='5'|| s[i]=='6'|| s[i]=='7'|| s[i]=='8'|| s[i]=='9'|| s[i]=='0')
            {e++; n=n+s[i];}
    }
    while(j < e-k)
    for(int i=0; i<n.size(); i++)
    {
        if(n[i]-48 < n[i-1]-48)
        {
            n.erase(i-1,1);
            j++;
            break;
        }
        if(i == n.size()-1)
        {
            j++;
            n.erase(i,1);
        }
    }
    cout<<n;
}

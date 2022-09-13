#include <bits/stdc++.h>
using namespace std;
string s,g;

int main()
{
    freopen("HoaThuong.INP","r",stdin);
    freopen("HoaThuong.OUT","w",stdout);
	cin>>s;
	 g=s;
    for (int i=0; i<g.size(); i++)
	{
	 if(g[i]>='a'&&g[i]<='z')
         g[i]=g[i]-32;
         cout<<g[i];
	}
	cout<<endl;
    for (int i=0; i<g.size(); i++)
	{
	 if(s[i]>=65&&s[i]<=90)
         s[i]=s[i]+32;
         cout<<s[i];
	}
}

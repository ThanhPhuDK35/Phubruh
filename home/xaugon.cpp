#include <bits/stdc++.h>
using namespace std;
string s;
long long i,j;
int main()
{
	freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    getline(cin,s);
    for(i=0;i<s.size();++i)
    {
      while(s[i]==s[i+1]) i++;
      cout<<s[i];
	}
}

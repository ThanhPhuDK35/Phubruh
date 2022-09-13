#include<bits/stdc++.h>
using namespace std;
string f[10001];
long long n;

string congxau(string a, string b)
{
	while(a.size()<b.size())a='0'+a;
	while(a.size()>b.size())b='0'+b;
	string c="";
	long long carry = 0;
	for(long long i=a.size()-1; i>=0; i--)
    {
		long long t=(a[i]-'0')+(b[i]-'0')+carry;
		carry =t/10;
		t=t%10;
		c=char(t+'0')+c;

	}
	if(carry==1)
	c='1'+c;
	return c;
}

int main()
{
    freopen("fibonaci.inp","r",stdin);
    freopen("fibonaci.out","w",stdout);
    cin>>n;
    f[1]=f[2]="1";
    for(long long i=3; i<=n; i++)
    {
        f[i]=congxau(f[i-1], f[i-2]);
    }
    cout<<f[n];
}
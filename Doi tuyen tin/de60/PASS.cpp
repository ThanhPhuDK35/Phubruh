#include<bits/stdc++.h>
using namespace std;
string n;
long long s;

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
    freopen("PASS.inp","r",stdin);
    freopen("PASS.out","w",stdout);
    cin>>n;
    for(int i=0; i<n.size(); i++)
    {
        s=s+n[i]-48;
    
    }
    cout<<s;
}
#include<bits/stdc++.h>
using namespace std;
string a, b;

string operator +(string a, string b)
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

string operator -(string a, string b)
{
		while(a.size()>b.size())b='0'+b;
		string c="";
		int carry=0;
		for(int i=a.size()-1; i>=0; i--)
        {
			int t=(a[i]-'0')-(b[i]-'0')-carry;
			if(t<0)
			{
				t+=10;
				carry=1;
			}
			else carry =0;
			c=char(t+'0')+c;
		}
		while(c.size()>1&&c[0]=='0'){
			c.erase(0,1);
		}
		return c;
}
int cmp(string a, string b)
{
    while(a.size()<b.size())a='0'+a;
	while(a.size()>b.size())b='0'+b;
	if(a>b)return 1;

	if(a==b)return 0;
	return -1;
}

int main()
{
    freopen("addlnt.inp","r",stdin);
	freopen("addlnt.out","w",stdout);
	cin>>a>>b;
    if(a[0]!='-'&&b[0]!='-')
    {
        cout<<a+b;
        return 0;
    }
    if(a[0]!='-'&&b[0]=='-')
    {
        b.erase(0,1);
        if(cmp(a,b)>=0)
        {
            cout<<a-b;
        }
        else
        cout<<"-"<<b-a;
        return 0;
    }
    if(a[0]=='-'&&b[0]!='-')
    {
        a.erase(0,1);
        if(cmp(b,a)>=0)
        {
            cout<<b-a;
	    }
	    else
            cout<<"-"<<a-b;;
        return 0;
    }
	a.erase(0,1);
	b.erase(0,1);
	cout<<"-"<<a+b;
	return 0;
}


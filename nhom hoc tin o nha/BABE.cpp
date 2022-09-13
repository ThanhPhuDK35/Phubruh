#include<bits/stdc++.h>
using namespace std;
long long a, b;

long long tongu(long long n)
{
	int d = 0;
	for(int i=1; i<=n/2; ++i)
		if(n%i==0)
			d += i;
	return d;
}


int main()
{
     cin>>a>>b;
     if(tongu(a) == b && tongu(b) == a)
        cout<<"YES";
     else
        cout<<"NO";
}

#include<bits/stdc++.h>
using namespace std;
long long a[100000001], n, d, s, j;

int main()
{
    s = 0;
	cin>>n;

	for(int i = 0; i < n;i++)
	{
		cin>>a[i];
	}
	sort(a, a+n);
	d = 0;
	j = 0;
	for(int i = 0; i < n;i++)
	{
		if(a[i] == a[i+1])
		{
			j++;
			d = d + j;
		}
		else
		{
			j = 0;
		}
	}
	cout<<d;
}


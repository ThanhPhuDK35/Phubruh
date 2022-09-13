#include<bits/stdc++.h>
using namespace std;
long int n, a[1000001], lis[10000001], t[10000001], p;
 
int main () 
{
    freopen("Xoa.inp","r",stdin);
    freopen("Xoa.out","w",stdout);
	cin>>n;
	a [0] = -1e9;
	a [n + 1] = 1e9;
 
	for (int i = 1; i <= n + 1; ++i) 
    {
		if (i <= n) 
            cin>>a[i];
		int l = 0, r = p;
		while (l < r) 
        {
			int m = (l + r + 1) / 2;
			if (a[t[m]] < a[i]) l = m;
			else r = m - 1;
		}
		lis [i] = l + 1;
		if (lis[i] > p) 
            t[++p] = i;
		else if (a[i] < a[t[lis [i]]]) t[lis [i]] = i;
	}
	cout<<n-lis [n + 1] + 1;
	return 0;
}
 
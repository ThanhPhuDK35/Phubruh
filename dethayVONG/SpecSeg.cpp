#include<bits/stdc++.h>
using namespace std;
int n,i,a[10001],mi,ma,s=0,j;
int main(){
	freopen("SpecSeg.inp","r",stdin);
	freopen("SpecSeg.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		mi=min(a[i],a[i+1]);
		ma=max(a[i],a[i+1]);
		s++;
		for(j=i+2;j<=n;j++)
		{
			mi=min(mi,a[j]);
			ma=max(ma,a[j]);
			if(mi==min(a[i],a[j]) && ma==max(a[i],a[j]))
			{
				s++;
			}
		}
	}
	cout<<s;
}

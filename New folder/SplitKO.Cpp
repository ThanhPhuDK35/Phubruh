#include<bits/stdc++.h>
using namespace std;
long long t,n,a[10005],k,s=0,z=0, x=0;

int main ()
{
	freopen("SplitKO.Inp ","r",stdin);
	freopen("SplitKO.Out","w",stdout);
	cin>>t;
	for(int i=1;i<=t;i++)
    {
		s=0;
		x=0;
		cin>>n>>k;
		for(int j=1;j<=n;j++)
		{
		    cin>>a[j];
		    s=s+a[j];
		}
		if(k==1)
		{
		    if(s%2==0) cout<<"No"<<'\n';
		    else cout<<"Yes"<<'\n';
	    }
		else
		{
			s=a[1];
		    for(int j=2;j<=n;j++)
		    {
			    if(s%2!=0)
			    {
				    s=a[j];
				    k--;
				    z=j;
		        }
                else s=s+a[j];
		        if(k==1) break;
	        }
	        for(int j=z;j<=n;j++)
	            x=x+a[j];
	        if(x%2==0) cout<<"No"<<'\n';
	        else cout<<"Yes"<<'\n';
        }
    }
}

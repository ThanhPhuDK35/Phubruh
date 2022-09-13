#include<bits/stdc++.h>
using namespace std;
long long a, bcnn, b, c;

int main()
{
    freopen("BCP.inp","r",stdin);
    freopen("BCP.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
    cin>>a>>b;
    bcnn = a*b/(__gcd(a, b));
    c=bcnn;
    for(long long i=2; i*i<=bcnn;i++)
    {
        int dem=0;
        while(bcnn%i == 0)
        {
            dem++;
            bcnn=bcnn/i;
        }
        if(dem%2 == 1) c=c*i;
    }
    if(bcnn > 1) c=c*bcnn;
    cout<<c;
}

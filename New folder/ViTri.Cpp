#include<bits/stdc++.h>
using namespace std;
long long a[100000001], n, b[1000001], s=0;

int main()
{
    freopen("ViTri.inp","r",stdin);
    freopen("ViTri.out","w",stdout);
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a, a+n);
        for(int i=0; i<n;i++)
        {
            if(a[i]==b[i])
                s++;
        }
        cout<<s;
}

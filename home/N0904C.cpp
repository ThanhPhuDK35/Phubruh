#include<bits/stdc++.h>
#define nmax 100005
#define ll long long
using namespace std;
struct hocsinh
{
    ll toan,tin;
    string ten;
};
bool hs(hocsinh x, hocsinh y)
{
    if(x.ten==y.ten)
    {
        if((x.toan+x.tin)==(y.toan+y.tin))
                return x.toan<y.toan;
        else
            return (x.toan+x.tin)<(y.toan+y.tin);

    }
    else
        return x.ten<y.ten;
}
hocsinh a[nmax];
ll n;
void QC()

{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i].ten>>a[i].toan>>a[i].tin;
        sort(a+1,a+n+1,hs);
        for(int i=1;i<=n;i++)
            cout<<a[i].ten<<" "<<a[i].toan<<" "<<a[i].tin<<"\n";
}
int main()
{
    QC();
}

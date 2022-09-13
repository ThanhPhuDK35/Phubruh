#include<bits/stdc++.h>
using namespace std;
long long tien, mo, h, m, n;

int main()
{
    freopen("DOITIEN.Inp","r",stdin);
    freopen("DOITIEN.Out","w",stdout);
    cin>>tien;
    m=tien/10000;
    tien-=10000*m;
    n=tien/5000;
    tien-=5000*n;
    h=tien/2000;
    tien-=2000*h;
    mo=tien/1000;
    tien-=1000*mo;
    if(tien == 0)
    {
        cout<<"1000"<<" "<<mo<<"\n";
        cout<<"2000"<<" "<<h<<"\n";
        cout<<"5000"<<" "<<n<<"\n";
        cout<<"10000"<<" "<<m<<"\n";
    }
}

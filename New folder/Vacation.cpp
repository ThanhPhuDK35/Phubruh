#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], b[100001], c[100001], m, s, trc, so1, so2, so3;
string e;

int main()
{
    //freopen("Vacation.inp","r",stdin);
    //freopen("Vacation.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    trc=0;
    for(int i=1; i<=n; i++)
    {
        if(c[i] > max(a[i], b[i]))
        {
            so3=c[i];
            e='C';
        }
        else
        {
            if(a[i] > max(c[i], b[i]))
            {
                so3=a[i];
                e='A';
            }
            else
            {
                so3=b[i];
                e='B';
            }
        }

    }
    cout<<s<<"\n"<<e;
}
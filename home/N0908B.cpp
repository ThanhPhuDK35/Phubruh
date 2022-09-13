#include<bits/stdc++.h>
using namespace std;
struct PS
{
        long long tu,mau;

};
PS r,p;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long ts=1,ms=1,tam;
    while(cin>>r.tu>>r.mau)
    {
        ts=(r.tu*ts);
        ms=(r.mau*ms);
        tam=__gcd(ts,ms);
        ts=ts/tam;
        ms=ms/tam;

    }
    cout<<ts<<" "<<ms;


}

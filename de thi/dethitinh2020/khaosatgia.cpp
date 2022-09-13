#include<bits/stdc++.h>
using namespace std;
long long n, s;
string st;

int main()
{
    freopen("KhaoSatGia.inp","r",stdin);
    freopen("KhaoSatGia.out","w",stdout);
    cin>>n;
    while(n--)
    {
        cin>>st;
        sort(st.begin(), st.end());
        cout<<st[st.size()-1]<<st[0]<<"\n";
        s=s+(st[0]-48);
    }
    cout<<s;
}
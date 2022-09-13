#include<bits/stdc++.h>
using namespace std;
long long n;
string st;

int main()
{
    freopen("HatCuom.inp","r",stdin);
    freopen("HatCuom.out","w",stdout);
    cin>>n>>st;
    sort(st.begin(), st.end());
    reverse(st.begin(), st.end());
    cout<<st;
}
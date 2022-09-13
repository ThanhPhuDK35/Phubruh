#include<bits/stdc++.h>
using namespace std;
long long n, m, k;
//-------------------
bool dx(string x)
{
    int i, j;
    i = 0; j = x.size() - 1;
    while(i < j)
    {
        if(x[i] != x[j]) return  false;
        i++; j--;
    }
    return true;
}
//------------------
int main()
{
    freopen("EraseChar.inp","r",stdin);
    freopen("EraseChar.out","w",stdout);
    string st, x;
    cin>>n>>k;
    cin>>st;
    m=n-k;
    for(int i=0; i<=k; i++)
    {
        x=st.substr(i, m);
        if(dx(x)== true)
        {
            cout<<x;
            return 0;
        }
    }
    cout<<"No";
}

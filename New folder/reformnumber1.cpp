#include<bits/stdc++.h>
using namespace std;
int a, k, n;

int main()
{
    freopen("ReFormNumber1.inp","r",stdin);
    freopen("ReFormNumber1.out","w",stdout);
    //cout<<"nhap a va k: "<<endl;
    cin>>a>>k;
   // cout<<"nhap n: ";
    cin>>n;
    for(int i = 0; i < n ;i++)
    {
        a=a+k;
    }
    cout<<a;
}

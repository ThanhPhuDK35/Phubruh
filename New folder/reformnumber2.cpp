#include<bits/stdc++.h>
using namespace std;
int a, k, n;

int main()
{
    freopen("ReFormNumber2.inp","r",stdin);
    freopen("ReFormNumber2.out","w",stdout);
    //cout<<"nhap a : "<<endl;
    cin>>a;
   // cout<<"nhap n: ";
    cin>>n;
    for(int i = 1; i <= n ;i++)
    {
        if(a%2==0)
        {
            a=a+3;
        }
        else
        {
            a=a+5;
        }
    }
    cout<<a;
}

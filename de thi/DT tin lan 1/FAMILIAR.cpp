#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], b[1000001];

bool kiem_tra(long long k)
{
    for(int i=k; i<=n; i++)
    {
        b[i]=a[i]+n-i+k;
    }
    sort(b+k, b+n+1);
    if((a[k]+n) == b[n]) 
        return true;
    return false;

}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+1+n);
    long long kq=0;
    long long dau=1, cuoi=n, mid=n;
    while(dau <= cuoi)
    {
        mid=(dau+cuoi)/2;
        if(kiem_tra(mid) == true)
        {
            kq=mid;
            cuoi=mid-1;
        }
        else
        {
            dau=mid+1;
        }
    } 
    cout<<n-mid+1;  
}
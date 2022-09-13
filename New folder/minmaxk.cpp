#include<bits/stdc++.h>
using namespace std;
int a[1000000];
long long n, k;

int main()
{
    cin>>n>>k;
    for(int i = 1; i <= n ; i++)
    {
        cin>>a[i];
    }
    sort(a+1, a+n+1); //tang dan
    cout<<a[k]<<endl;
    //sort(a, a+n, greater<int>());
    cout<<a[n-k+1]<<endl;






}

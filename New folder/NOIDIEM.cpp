#include<bits/stdc++.h>
using namespace std;
pair<int, int> a[1000000];
int n = 0;

int main()
{
    freopen("NOIDIEM.Inp","r",stdin);
    freopen("NOIDIEM.Out","w",stdout);
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>a[i].first;
        a[i].second = 0; //mau do
    }
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i+n].first;
        a[i+n].second = 1;
    }
    sort(a+1, a+1+2*n);
    int s = 0, t = 0;
    for(int i = 2 ; i <= 2*n; i++)
    {
        // a[i-1] --- a[i] ?
        if(a[i].second != a[i-1].second && t < i-1)
        {
            s++;
            t = i;
        }
    }
    cout<<s;
}




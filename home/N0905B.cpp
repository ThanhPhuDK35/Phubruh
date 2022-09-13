#include <bits/stdc++.h>
using namespace std;
struct ct
{
    string ht;
    float nang,cao;
    int tuoi;

};
ct a[105];
bool cmp(ct x,ct y)
{
    return(x.tuoi<y.tuoi);
}
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].ht;
        cin>>a[i].nang;
        cin>>a[i].cao;
        cin>>a[i].tuoi;
    }
    sort(a+1,a+n+1,cmp);
    cout<<a[1].ht<<" "<<a[1].nang<<" "<<a[1].cao<<" "<<a[1].tuoi;
}

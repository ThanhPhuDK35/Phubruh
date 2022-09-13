#include<bits/stdc++.h>
using namespace std;
long long n,x,y,z,t,a[100000001], l, r;

int main()
{
     freopen("checkmono.inp","r",stdin);
     freopen("checkmono.out","w",stdout);
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     cin>>n;
     for(int i = 1; i <= n; i++)
     {
             cin>>a[i];
     }
     cin>>t;
     while(t--)
     {
         cin>>l>>r;
         bool kt1 = true, kt2 = true;
         for(int i = l; i < r; i++)
         if(a[i] > a[i+1])
         {
            kt1 = false;
            break;
         }
         for(int i = l; i < r; i++)
         {
            if(a[i] < a[i + 1])
            {
               kt2 = false;
               break;
            }
         }

         if(kt1 == true || kt2 == true)
            cout<<"Yes"<<"\n";
         else
            cout<<"No"<<"\n";
    }
}

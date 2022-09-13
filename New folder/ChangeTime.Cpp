#include<bits/stdc++.h>
using namespace std;
long long n, m, x;

int main()
{
      freopen("eTime.Inp","r",stdin); // mo tep de doc
      freopen("eTime.Out","w",stdout); //mo tep de ghi
      cin>>m>>n;
      cin>>x;
      cout<<m*3600+60*n<<endl;
      cout<<x/3600<<" "<<(x%3600)/60;


}

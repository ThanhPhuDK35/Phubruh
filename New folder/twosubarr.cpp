    #include<bits/stdc++.h>
using namespace std;
long long n, s;
int y[1000001];
int a[1000001];
int main()
{
        freopen("TwoSubArr.Inp","r",stdin); // mo tep de doc
        freopen("TwoSubArr.Out","w",stdout); //mo tep de ghi
        cin>>n;
        s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int x=i+1; x<n; x++)
            {
                y[s] = a[i] - a[x];
                s++;
                y[s] = a[x] - a[i];
                s++;
            }
        }

        sort(y, y+s);
        cout<<y[0]<<'\n';
        for(int i=1; i<s; i++)
        {
            if(y[i]>y[i-1])
                cout<<y[i]<<'\n';
        }
}

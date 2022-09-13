
    cout.tie(0);
    cin>>n>>q;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    while(q--)
    {
        cin>>k;
        cout<<b[k]<<"\n";
    }
}
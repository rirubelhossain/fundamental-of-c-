#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,j,n,m,now,prev;
    while(scanf("%lld",&n)!=EOF)
    {
        cin>>m;
    n--;
    ll cnt=0;
    cin>>prev;
    while(n--)
    {
        cin>>now;
        if((now-prev)==m)
            cnt++;
        prev=now;
    }
    cout<<cnt<<endl;
    }
    return 0;
}

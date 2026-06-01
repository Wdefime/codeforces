#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#define int long long
typedef long long ll;
#define endl '\n'
const int mod = 998244353;
using namespace std;

int get0(int x)
{
    return 1+(x>=3?(x-3)/4+1:0);
}

int get1(int x)
{
    return (x>=1?(x-1)/4+1:0);
}

// int get0(int x){
//     return 1ll + (x >= 3 ? (x - 3) / 4 + 1 : 0);
// }

// int get1(int x){
//     return (x >= 1 ? (x - 1) / 4 + 1 : 0);
// }

void solve()
{
    int x,y;cin>>x>>y;
    vector<int> arr(x);
    for(int i = 0;i<x;i++)
    {
        arr[i] = i+1;
    }
    vector<int> prev(x+1);
    prev[1]=arr[0];
    for(int i = 1;i<=x;i++)
    {
        if(i!=1) prev[i]=prev[i-1]^arr[i-1];
        cout<<prev[i]<<' ';
    }
    cout<<endl;
    int ans=0;
    int l0=(get0(y-(ll)1))%mod;
    int r0=(get0(x)-l0)%mod;
    cout<<l0<<' '<<r0<<' '<<ans<<endl;
    ans=(l0*r0+ans)%mod;
    int l1=(get1(y-(ll)1))%mod;
    int r1=(get1(x)-l1)%mod;
    cout<<l1<<' '<<r0<<' '<<ans<<endl;
    ans=(l1*r1+ans)%mod;
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> pi;
 
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define nl "\n"
#define ll long long
#define high INT64_MAX
 
vector<ll> v;
 
void precompute()
{
    v.pb(10);
    ll k=2;
    ll a=10;
    ll p=11;
    ll b=9*p;
    for(ll i=1;i<=16;i++)
    {
      v.pb(((b-a)*k)+v[i-1]+k);
      a*=10;
      p=p+a;
      b=9*p;
      k++;
    }
}
void solve()
{
    ll a,c(1),d,e(0),y;
    cin >> a;
    string b,h;
    b=to_string(a);
    for(ll i=0 ;i < v.size()-1;i++)
    {
      if(a>=v[i] && a<v[i+1])
      {
        e=i+1;
        break;
      }
    }
    if(b.size()==1) cout << b <<nl;
    else
    {
      for(ll i=0;i<e;i++) c*=10;
      d = a-v[e-1];
      d = d/(e+1);
      d+=c;
      h=to_string(d);
      y=(a-v[e-1])%(e+1);
      cout << h[y] <<nl;
    }
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precompute(); 
    ll t;
    cin >> t;
    while(t--)
    {
      solve();  
    }
    // cout << v[v.size()-1];
}

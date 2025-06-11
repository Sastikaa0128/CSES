#include <bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> pi;
 
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define nl "\n"
#define fr(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define INF 1e9
#define LINF 1e18
#define MOD 1000000007
#define MOD2 998244353
 
vector<string> v;
vector<ll> ou;
void solve(int n) 
{
   string s(n,0);
   for(int i=0;i<(1<<n);i++)
   {
      for(int j=0;j<n;j++)
      {
         if(i&(1<<j)) s[j]='1';
         else s[j]='0';
      }
      v.pb(s);
   }  
}
void final(int n)
{
   vector<ll> vec(n);
   for(int i=0;i<n;i++) cin >> vec[i];
   for (ll i = 0; i < v.size(); ++i)
   {
      ll sum1(0),sum2(0);
      for(ll j=0 ;j < vec.size();j++)
      {
         if(v[i][j]=='1') sum1+=vec[j];
         else if(v[i][j]=='0') sum2+=vec[j];
      }     
      ll tot = abs(sum1-sum2);
      ou.pb(tot);
   }
}
 
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    final(n);
    sort(ou.begin(),ou.end());
    cout << ou[0];
}

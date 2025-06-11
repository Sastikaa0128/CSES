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
vector<string> k;
 
void solve(int a) 
{
   if(a==1)
   {
    v.resize(2);
    k.resize(2);
 
    v[0]='0';v[1]='1';
    k[0]='0';k[1]='1';
   }
   else
   {
     solve(a-1);
     for(int i=0;i<v.size();i++)
     {
        v[i]='0'+v[i];
        k[i]='1'+k[i];
     }
     reverse(v.begin(),v.end());
     v.insert(v.end(), k.begin(), k.end());
     k=v;
   }
   
 
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin >> a;
    solve(a);
    for(auto x : v) cout << x <<endl;
}

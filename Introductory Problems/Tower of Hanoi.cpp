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
vector<string> y;
int solve(int a) 
{
  if(a==1) return 1;
  else return (2*(solve(a-1))+1);
}
void final(int a)
{
   if(a==1)
   {
      string s;
      s="13";
      v.pb(s);
      k.pb(s);   }
   else
   {
      final(a-1);
      k.clear();
      y=v;
      for(int i=0;i<v.size();i++){
         if(v[i][0]=='2') v[i][0]='3';
         else if (v[i][0]=='3') v[i][0]='2';
         if(v[i][1]=='2') v[i][1]='3';
         else if (v[i][1]=='3') v[i][1]='2';
      }
      k.insert(k.end(), v.begin(), v.end());
      k.pb("13");
      v=y;
      for(int i=0;i<v.size();i++){
         if(v[i][0]=='1') v[i][0]='2';
         else if (v[i][0]=='2') v[i][0]='1';
         if(v[i][1]=='1') v[i][1]='2';
         else if (v[i][1]=='2') v[i][1]='1';
      }
      k.insert(k.end(), v.begin(), v.end());
      v=k;
   }
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin >> a;
    cout << solve(a) << endl;
    final(a);
    for(auto x : k)
    {
      cout << x[0] << " " << x[1] << endl;
    }
}

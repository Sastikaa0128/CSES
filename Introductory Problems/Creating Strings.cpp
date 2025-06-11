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
 
vector<string> ss;
vector<bool> choice(8,0);
vector<char> permutation;
string s,a;
set<string> ye;
void solve()
{
    a=s;
    if(permutation.size()==s.size())
    {
        for(int i=0;i<s.size();i++)
        {
            a[i]=(permutation[i]);
        }
        ss.pb(a);
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(choice[i]) continue;
            choice[i]=1;
            permutation.pb(s[i]);
            solve();
            permutation.pop_back();
            choice[i]=0;
        }
    }
}
 
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >>s;
    sort(s.begin(),s.end());
    solve();
    for(auto x: ss) ye.insert(x);
    cout << ye.size() << nl;
    for(auto x:ye) cout << x  << nl;
}

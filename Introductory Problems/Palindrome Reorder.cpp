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
 
void solve() 
{
    string s ; cin>>s;
    ll a(0),b,c;
    ll n = (s.size());
    vector<char> v(n);
    map<char,int> m;
    for(int i=0;i<n;i++) m[s[i]]++;
    int j=0;
    char z = 'k';
    for(auto x = m.begin() ; x!=m.end() ; x++)
    {
        if(x->second&1) 
        {
            a++;
            z=x->first;
            for(int i=0 ; i<((x->second-1)/2) ;i++)
            {
                v[j]=x->first;
                v[n-j-1]=x->first;
                j++;
            }
        }
        else
        {
            for(int i=0 ; i<(x->second/2) ;i++)
            {
                v[j]=x->first;
                v[n-j-1]=x->first;
                j++;
            }
        }
 
    }
    if(n&1 and a>1) cout << "NO SOLUTION" << nl;
    else if (n%2==0 and a>0) cout << "NO SOLUTION" <<nl;
    else
    {
        if(n&1) v[n/2]=z;
        for(auto x : v)
        {
            cout << x;
        }
    }
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    cout << nl;
}

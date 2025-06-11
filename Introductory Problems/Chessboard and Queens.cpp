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
 
const int n=8;
int col[n],d1[2*n-1],d2[2*n-1];
int cc =0;
vector<string> s(n);
 
void initialize(int n)
{
    for(int i=0;i<n;i++) col[i]=0;
    for(int i=0;i<2*n-1;i++) d1[i]=0;
    for(int i=0;i<2*n-1;i++) d2[i]=0;
    for(int i=0;i<n;i++) cin >> s[i];
}
void solve(int y) 
{
    if(y==n) ++cc; 
    else
    {
        for(int x=0;x<n;x++)
        {
            if(col[x]||d1[x+y]||d2[x-y+n-1]||s[y][x]=='*') continue;
            col[x]=d1[x+y]=d2[x-y+n-1]=1;
            solve(y+1);
            col[x]=d1[x+y]=d2[x-y+n-1]=0;
        }
    }   
}
 
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    initialize(n);
    solve(0);
    cout << cc << endl;
}

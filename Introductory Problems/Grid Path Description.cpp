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
 
ll sum(0);
string s;
vector<vector<int>> vec(7, vector<int>(7,0));
 
void solve(int k,int x ,int y)
{
  if(k==49) 
  { 
    if(x==0 && y==6) sum++;
  }
 
  else
  {
    // checking if the algorithm reachers the destination before
    if(x==0 && y==6) return;  
 
    //checking if it touches the wall
    else if(y==0)
    {
      if(x<6 && x>0) 
      {
        if(vec[x-1][y]==0 && vec[x+1][y]==0) return;
      }
    }
 
    //down wall
    else if(y==6)
    {
      if(x<6 && x>0) 
      {
        if(vec[x-1][y]==0 && vec[x+1][y]==0) return;
      }
    }
 
    //left wall
    else if(x==0)
    {
      if(y<6 && y>0) 
      {
        if(vec[x][y-1]==0 && vec[x][y+1]==0) return;
      }
    }
 
    //right wall
    else if(x==6)
    {
      if(y<6 && y>0) 
      {
        if(vec[x][y-1]==0 && vec[x][y+1]==0) return;
      }
    }
 
    //checking if it cant go forward further
    if(x>0 && y>0 && y<6 &&x<6)
    {
      if(vec[x-1][y]==1 && vec[x][y-1]==0 && vec[x][y+1]==0 && vec[x+1][y]==1) return;
    }
 
    if(x>0 && y>0 && y<6 &&x<6)
    {
      if(vec[x][y-1]==1 && vec[x-1][y]==0 && vec[x+1][y]==0 && vec[x][y+1]==1) return;
    }
 
    //right
    if(x<6 && (s[k-1]=='?' || s[k-1]=='R') && vec[x+1][y]==0) 
    {
      vec[x+1][y]=1;
      solve(k+1,x+1,y);
      vec[x+1][y]=0;
    }
 
    //left
    if(x>0 && (s[k-1]=='?' || s[k-1]=='L') && vec[x-1][y]==0) 
    {
      vec[x-1][y]=1;
      solve(k+1,x-1,y);
      vec[x-1][y]=0;
    }
 
    //down
    if(y<6 && (s[k-1]=='?' || s[k-1]=='D') && vec[x][y+1]==0) 
    {
      vec[x][y+1]=1;
      solve(k+1,x,y+1);
      vec[x][y+1]=0;
    }
 
    //up
    if(y>0 && (s[k-1]=='?' || s[k-1]=='U') && vec[x][y-1]==0) 
    {
      vec[x][y-1]=1;
      solve(k+1,x,y-1);
      vec[x][y-1]=0;
    }
 
  }
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    vec[0][0]=1;
    solve(1,0,0);
    cout << sum << nl;
}

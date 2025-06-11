#include <bits/stdc++.h>
using namespace std;    
int main() 
{
    int b = 1000000007;
    long long t,a,c;
    cin >> t;
    a=1;
    for(long long i=1 ;i<t+1;i++)
    {
        a=(a%b)*(2);
    }
    cout << a%b << endl;
}

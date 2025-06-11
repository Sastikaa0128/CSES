#include <bits/stdc++.h>
using namespace std;    
int main() 
{
    long long n,a,c;
    cin >> n;
    a=0;
    while(n/5 != 0)
    {
        n=n/5;
        a=a+n;
    } 
    cout << a << endl;
    
}

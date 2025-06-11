#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	long long t,n,a,b,c,k;
    cin >> n;
    k=0;
    if(n==1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 0 << endl;
        for(long long  i=2 ;i<n+1 ;i++)
        {
            a = (i*i)*((i*i)-1)/2;
            b = a-(8*k);
            k+=i-1;
            cout<<b<<endl;
        } 
    }
    

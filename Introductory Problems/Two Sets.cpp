#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	long long t,n,a,b,c,k;
    cin >> n;
    if(n==1 or n==2)
    {
        cout << "NO" << endl;
    }
    else if (n%4==0)
    {
        a=1;
        b=n;
        cout << "YES" << endl;
        cout << n/2 << endl;
        for(int i=0;i<n/4;i++)
        {
            cout << a << " " << b <<" ";
            a++;b--;
        }
        cout << endl;
        cout << n/2 << endl;
        for(int i=0;i<n/4;i++)
        {
            cout << a << " " << b <<" ";
            a++;b--;
        }
    }
    else if ((n-3)%4==0)
    {
        a=4;
        b=n;
        cout << "YES" << endl;
        cout << (n/2) +1 <<endl;
        cout << 1 << " " << 2 <<" ";
        for(int i=0;i<((n/2)-1)/2;i++)
        {
            cout << a << " " << b <<" ";
            a++;b--;
        }
        cout << endl;
        cout << n/2 << endl;
        cout << 3 << " ";
        for(int i=0;i<((n/2)-1)/2;i++)
        {
            cout << a << " " << b <<" ";
            a++;b--;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;    
int main() 
{
    long long t,a,b,c,d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        d=0;
        if(a==0 and b==0)
        {
            cout << "YES" << endl;
        }
        else if(a==0 or b==0)
        {
            cout<< "NO" << endl;
        }
        else
        {
            if(a>=b)
            {
             c=a;
            }
            else
            {
                c=b;
                b=a;
            }
            float n = (float)c/b;
            if(n==2)
            {
                d=1;
            }
            if(((c+b)%3==0 and c/b <2) or((c+b)%3==0 and d==1) )
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        
    }
}

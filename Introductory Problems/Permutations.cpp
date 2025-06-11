#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long  n,a,b,c,sum,d,e;
	vector<int> vec;
	cin >> n;
	d=n;
	e=n;
	sum=1;
	if(n==1)
	{
		cout <<1<<endl;
	}
	if(n==2 or n==3)
	{
		cout << "NO SOLUTION" <<endl;
	}
	else if(n==4)
	{
		cout << "2 4 1 3" << endl;
	}
	else if(n!=1)
	{
		if(n%2==0)
		{
			a=(n-1)/2+1;
			d=n-1;
			n=n-1;
		}
		else
		{
			a=n/2+1;
		}
		c=1;
		cout << a << " ";
		while(sum != d)
		{
			cout << c << " ";
			sum++;
			if(c!=n)
			{
				cout << n << " ";
				sum++;
			}
			c++;
			n--;
		}
		if(e%2==0)
		{
			cout << e <<endl;
		}
	}
}

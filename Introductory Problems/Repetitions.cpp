#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long  n,a,b,c;
	string s;
	cin >> s;
	n=1;
	a=1;
	for(int i=0 ;i< s.size()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			n++;
		}
		else
		{
			if(n>a)
			{
				a=n;
			}
			n=1;
		}
	}
	if (n>a)
	{
		cout << n <<endl;
	}
	else
	{
		cout << a <<endl;
	}
	
}

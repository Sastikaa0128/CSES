#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long  n,a,b,c;
	vector<int> vec;
	cin >> n;
	a=0;
	for(int i=0;i<n;i++)
	{
		cin >> b;
		vec.push_back(b);
	}
	for (int i = 0; i < n-1; i++)
	{
		if(vec[i]>vec[i+1])
		{
			a=a+vec[i]-vec[i+1];
			vec[i+1]=vec[i];
		}
	}
	cout << a << endl;
}

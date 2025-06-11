#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long long  n,a,b,c;
	vector<int> vec;
	cin >> n;
	for(int i=0;i<n-1;i++)
	{
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<n;i++)
	{
 
		if(vec[i]!=i+1)
		{
			cout << i+1 <<endl;
			break;
		}
	}

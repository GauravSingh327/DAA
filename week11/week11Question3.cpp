#include<bits/stdc++.h>
using namespace std;
bool subarray(vector<int> vec,int n, int sum)
{
	if(sum == 0) return true;
	if(sum < 0 || n<0) return false;
	return subarray(vec, n-1, sum)||subarray(vec,n-1, sum - vec[n]);
}
int main()
{
	int V;
	cin>>V;
	vector<int> vec(V);
	for(int i = 0;i<V;i++)
	{
		cin>>vec[i];
	}
	int sum = 0;
	for(auto i: vec)
		sum+=i;
	if(sum%2 == 0)
	{
		bool ans = subarray(vec,V-1,sum/2);
		if(ans)	cout<<"\nyes";
		else cout<<"\nno";
	}
	else
	{
		cout<<"\nno";
	}
	return 0;
}
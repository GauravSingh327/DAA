#include<bits/stdc++.h>
using namespace std;
int count_coins(vector<int> vec, int n, int sum)
{
	if(sum == 0) return 1;
	if(sum<0) return 0;
	if(n<=0) return 0;
	return count_coins(vec, n-1, sum) + count_coins(vec, n, sum - vec[n-1]);
}
int main()
{
	int V;
	cin>>V;
	vector<int> coins(V);
	for(int i = 0 ;i<V;i++)
	{
		cin>>coins[i];
	}
	int sum;
	cin>>sum;
	int answer = count_coins(coins,V,sum);
	cout<<answer;
	return 0;
}
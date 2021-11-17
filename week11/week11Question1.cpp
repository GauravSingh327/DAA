#include<bits/stdc++.h>
using namespace std;
int mcm(vector<int> vec, int a, int b)
{
	if(a == b)
		return 0;
	int Min = INT_MAX;
	for(int i = a;i<b;i++)
	{
		int cost = mcm(vec, a,i) + mcm(vec, i+1,b) + vec[a-1]*vec[i]*vec[b];
		if(cost<Min)
			Min = cost;
	}
	return Min;
}

int main()
{
	int V;
	cin>>V;
	vector<int> vec;
	int i,j;
	cin>>i>>j;
	vec.push_back(i);
	vec.push_back(j);
	for(int ti = 1;ti<V;ti++)
	{
		cin>>i>>j;
		vec.push_back(j);
	}
	int answer = mcm(vec,1,V);
	cout<<answer;
	return 0;
}
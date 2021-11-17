#include<bits/stdc++.h>
using namespace std;
int main()
{
	int V;
	cin>>V;
	vector<int> arr(V);
	for(int i = 0;i<V;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(), arr.end());
	int sum = arr[0] + arr[1];
	int answer = sum;
	for(int i = 2;i<V;i++)
	{
		sum = sum + arr[i];
		answer += sum;
	}
	cout<<answer;
	return 0;
}
/*
Maximum and minimum of an array using minimum number of comparisons
*/
#include<bits/stdc++.h>
using namespace std;
void MinMax(int arr[],int n)
{
	int i=0;
	int min = arr[0];
	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<"minimum is "<<min<<" and maximum is "<<max<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int * arr =new int[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		MinMax(arr,n);
	}
	return 0;
}

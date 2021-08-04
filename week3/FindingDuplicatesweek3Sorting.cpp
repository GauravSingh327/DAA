#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"Enter the no. of test cases:-\t";
	cin>>t;

	while(t--)
	{
		int n,i,j;
		cout<<"Enter the size of array:-\t";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array:-\n";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		bool flag=false;
		sort(arr,arr+n);
		for(i=0;i<n-1;i++)
		{
			if(arr[i]==arr[i+1])
			{
				flag=true;
				break;
				}	
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}

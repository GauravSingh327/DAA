#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"ENTER NO. OF TEST CASES:\t";
	cin>>t;
	while(t--)
	{
		int n,x,c=0;
		cout<<"ENTER SIZE OF ARRAY:\t";
		cin>>n;
		int arr[n];
		cout<<"ENTER ELEMENTS OF ARRAY:\n";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		cout<<"ARRAY AFTER SORTING :\t";
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\nENTER PAIR DIFFERENCE TO FIND IN ARRAY:\t";
		cin>>x;
	
		//O(n^2)
		/*
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]-arr[i]==x)
				c++;
			}
		}
		*/
		
		// O(log n)
		int i=0;
		int j=1;
		while(i<n&&j<n)
		{
			if(arr[j]-arr[i]<x)
			j++;
			else if(arr[j]-arr[i]>x)
			i++;
			else if(arr[j]-arr[i]==x)
			{
				if(i!=j)
				c++;
				j++;	
			}
		}
		cout<<"total no. of such pairs are : "<<c<<endl;		
	}
	return 0;
}

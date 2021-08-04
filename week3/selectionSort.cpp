#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"Enter the no. of test cases:-\t";
	cin>>t;

	while(t--)
	{
		int n,i,j,min,minindex,com=0,temp,swaps=0;
		cout<<"Enter the size of array:-\t";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array:-\n";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n-1;i++)
		{
			min=arr[i];
			minindex=i; 
			for(j=i+1;j<n;j++)
			{
				if(arr[j]<min)
				{
					min=arr[j];
					minindex=j; 
				}
				com++;
				
			}
			temp=arr[i];
			arr[i]=arr[minindex];
			arr[minindex]=temp;	
		}
		swaps=n-1;
		cout<<"The sorted array is:-\t";
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		cout<<"Comparisions:\t"<<com;
		cout<<endl;
		cout<<"Swaps:\t"<<swaps;
		cout<<endl;
	}
	return 0;
}

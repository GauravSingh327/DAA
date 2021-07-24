#include <iostream>
#include <conio.h>
#include <algorithm> 
using namespace std ;

int main()
{
	int t;
	cout<<"ENTER THE TEST CASES\n";
	cin>>t;
	while(t--)
	{
		int n,beg,end,mid,key,flag=0;
		cout<<"ENTER THE SIZE OF ARRAY\n";
		cin>>n;
		int arr[n]; 
		cout<<"ENTER THE ELEMENTS OF ARRARY\n";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);     //for binary search our array should be sorted.
		cout<<"ARRARY is : \t";
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		key;
		cout<<"\nENTER THE ELEMENT YOUI WANT TO SEARCH\n";
		cin>>key;
		beg=0;
		end=n-1;
		while(beg<=end)
		{
			mid=(beg+end)/2;
			if(arr[mid]==key)
			{
				cout<<"ELEMENT FOUND AT POSITION "<<mid+1<<endl;
				flag=1;
				break;
			}
			else if(arr[mid]<key)
			{
				beg=mid+1;
			}
			else
			{
				end=mid-1;
			}
		}
		if(flag==0)
		cout<<"\nELEMENT NOT FOUND\n";	
	}
	return 0;
}

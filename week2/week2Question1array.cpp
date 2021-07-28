#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"ENTER NO. OF TEST CASES:\t";
	cin>>t;
	while(t--)
	{
		int n,key,i,j,flag=0,l=-1,mid,c=1;
		cout<<"ENTER SIZE OF ARRAY:\t";
		cin>>n;
		int arr[n];
		cout<<"ENTER ELEMENTS OF ARRAY:\n";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the element to be searched\n";
		cin>>key;
		int b=0;
		int e=n-1;
		while(b<=e)
		{
			mid=(b+e)/2;
			if(arr[mid]<key)
			b=mid+1;
			else if(arr[mid]>key)
			e=mid-1;
			else if(arr[mid]==key)
			{
				flag=1;
				l=mid;
				cout<<arr[mid]<<"-";
				break;
			}
		}
		if(flag==0)
		cout<<"\nKEY NOT PRESENT\n";
		else
		{
			/*for(int i=b;i<=e;i++)
			{
				if(arr[i]==key)
				c++;
			}
			*/
			int l=mid-1;
			while(l>=0&&arr[l]==key)
			{
				c++;
				l--;
			}
			int r=mid+1;
			while(arr[r]==key&&r<=n-1)
			{
				c++;
				r++;
			}
			cout<<c<<endl;
		}
	}
	return 0;
}

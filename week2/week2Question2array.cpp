#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"ENTER NO. OF TEST CASES:\t";
	cin>>t;
	while(t--)
	{
		int n;
		bool flag=false;
		cout<<"ENTER SIZE OF ARRAY:\t";
		cin>>n;
		int arr[n];
		cout<<"ENTER ELEMENTS OF ARRAY:\n";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<endl;
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					if((arr[i]+arr[j])==arr[k])
					{
						cout<<i+1<<" "<<j+1<<" "<<k+1;
						flag=true;
					}
				}
			}
		}
		if(!flag)
		{
			cout<<"\nNO SEQUENCE FOUND\n";
		}
	}
	return 0;
}

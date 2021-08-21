#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n1,n2;
	cout<<"Enter Array1 size:\t";
	cin>>n1;
	int arr1[n1];
	cout<<"Enter elements of Array1\n";
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter Array2 size:\t";
	cin>>n2;
	int arr2[n2];
	cout<<"Enter elements of Array2\n";
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];	
	}
	int p1=0,p2=0;
	cout<<"Common Elements are:\t";
	while(p1<n1&&p2<n2)
	{
		if(arr1[p1]<arr2[p2])
		{
			p1++;
		}
		else if(arr1[p1]>arr2[p2])
		{
			p2++;
		}	
		else
		{
			cout<<arr1[p1]<<" ";
			p1++;
			p2++;
		}
	}
	cout<<endl;	
}

int main()
{
	int t;
	cout<<"Enter the no. of test case:\t";
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

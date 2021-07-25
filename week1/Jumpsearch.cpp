#include <iostream>
#include <conio.h>
#include <algorithm>
#include <math.h>
using namespace std ;
int main()
{
	int t;
	cout<<"ENTER NUMBER OF TEST CASES\t";
	cin>>t;
	while(t--)
	{
		int n,key,b,jump,e;
		bool flag = true;
		cout<<"\nENTER SIZE OF ARRAY:\t";
		cin>>n;
		int arr[n];
		cout<<"\nENTER ELEMENTS OF ARRAY";
		for(int i=0;i<n;i++)
		{
			cout<<"\nENTER "<<i+1<<" ELEMENT :\t";
			cin>>arr[i];
		}
		sort(arr,arr+n);
		cout<<"\nARRAY AFTER SORTING :\t";
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\nENTER ELEMENT TO BE SEARCHED:\t";
		cin>>key;
		b=0;
		jump=sqrt(n);
		e=jump;
		while((arr[e]<=key)&&(e<=n))
		{
			b=e;
			e+=jump;
			if(e>n)
			e=n;
		}
		for(int i=b;i<=e;i++)
		{
			if(arr[i]==key)
			{
			cout<<"\nELEMENT found at potition "<<i+1;
			flag=false;
		    }
		}
		if(flag)
		{
			cout<<"\nELEMENT NOT FOUND";
		}
	}
	return 0;
}

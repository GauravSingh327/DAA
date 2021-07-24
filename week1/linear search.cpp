#include <iostream>
using namespace std;
void solve()
{
	int i=0;
  	int arr[100];
  	int s;
  	int x;
  	cout<<"Enter the size of array (less than 100)"<<endl;
  	cin>>s;
  	cout<<"Enter the elements of array\n";
  	for(i=0;i<s;i++)
  	{
  		cin>>arr[i];    	
	}
	cout<<"Enter the element you want to search\n";
	cin>>x;
	int pos=-1;
  	for(i=0;i<s;i++)
  	{
  		if(arr[i]==x)
  		{
  			pos=i;
  			break;
		  }
	  }
	  if(pos==-1)
	  cout<<"The element is not found\n";
	  else
	  cout<<"Element is found at "<< i+1 <<" potition \n";
	
}
int main()
{
  int n;
  cout<<"Enter the no. of test cases\n";
  cin>>n;
  while(n--)
  {
  	 solve();
  }
  return 0;
}


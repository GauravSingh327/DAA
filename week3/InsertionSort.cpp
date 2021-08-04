#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n)
{
	int c=0;
	for( int i = 0 ;i < n ; i++ ) 
	{
      int temp = arr[ i ]; //storing element that is being compared   
      int j = i; //going in sorted  part
          while(  j > 0  && temp < arr[ j -1]) //if soted element is greater than arr[i]
		   {
                arr[ j ] = arr[ j-1]; 
                j= j - 1;
                c++;
           }
           arr[ j ] = temp;      
     }  
    cout<<"\nARRAY AFTER SORTING IS:\t";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	cout<<"Comparisions = "<<c;
	cout<<endl;
	cout<<"shifts = "<<c+n-1;
	cout<<endl;
	
}
void solve()
{
	int n;
	cout<<"ENTER SIZE OF ARRAY\t";
	cin>>n;
	int arr[n];
	cout<<"ENTER ARRAY\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,n);
		
}
int  main()
{
	int t;
	cout<<"ENTER NO OF TEST CASES\t";
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

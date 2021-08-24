/*Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/
#include<bits/stdc++.h>
using namespace std;
void Rev(int arr[],int n)
{
	int i=0;
	int j=n-1;
	int temp=0;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int * arr =new int[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		Rev(arr,n);
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

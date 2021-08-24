/*Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.*/

#include<bits/stdc++.h>
using namespace std;
int Find_Kth_LargestElement(int arr[],int n,int x)
{
	sort(arr,arr+n);
	int ans1=-1,ans2=-1;
	if(x<=n)
	{
		ans1 =  arr[x-1];
		ans2 =  arr[n-x];	
		cout<<x<<"th smallest is "<<ans1<<" and "<<x<<"th largest is "<<ans2<<endl;
	}
	else
	cout<<"Not Found "<<endl;
	
}
void solve()
{
    int n;
    cout<<"Enter the size of Array\t";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array\n";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	int x;
    cout<<"Enter the Element to be searched\t";
    cin>>x;
	Find_Kth_LargestElement(arr,n,x);
}

int main()
{
    int t;
    cout<<"enter no. of test cases\n";
    cin>>t;
    while(t--)
    {
        solve();
    }    
    return 0;     
}


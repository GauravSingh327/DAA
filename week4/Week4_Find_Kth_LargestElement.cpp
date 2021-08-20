#include<bits/stdc++.h>
using namespace std;
int Find_Kth_LargestElement(int arr[],int n,int x)
{
	sort(arr,arr+n);
	if(x<=n)
	return arr[x-1];
	else
	return -1;
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
	int pos = Find_Kth_LargestElement(arr,n,x);
	if(pos!=-1)
	cout<<"Element found at potiotion is  "<<pos<<endl;
	else
	cout<<"Not Found\n";
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


#include<bits/stdc++.h>
using namespace std;
static int comparisions = 0;
static int swaps = 0;
void merge(int arr[],int start,int mid,int end)
{
	int s=(end-start)+1;
	int * A = new int[s];
	int ni=((start+end)/2)+1;
	int i=start;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=end)
	{
		if(arr[i]<=arr[j])
		{
			comparisions++;
			A[k]=arr[i];
			k++;
			i++;
		}
		else
		{
			swaps+=(ni-i);
			comparisions++;
			A[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		A[k]=arr[i];
		k++;
		i++;
	}
	while(j<=end)
	{
		A[k]=arr[j];
		j++;
		k++;
	}
	for(i=start,k=0;i<=end;i++,k++)
	{
		arr[i]=A[k];
	}
	delete A;
}
void mergesort(int arr[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
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
    mergesort(arr,0,n-1);
	cout<<"\nEnter Elements of Array after Sorting :\n";
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Comparisions:\t"<<comparisions;
	cout<<endl;
	cout<<"Inversions:\t"<<swaps;
	cout<<endl;
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


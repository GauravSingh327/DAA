#include <bits/stdc++.h>
using namespace std;
static int swaps=0;
static int comp=0;
void swap(int *x,int *y)
{
	swaps++;
	int temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int arr[],int beg,int end)
{
    int pivot_index = beg + rand() % (end-beg+1); //generating random pivot index.
	swap(&arr[pivot_index],&arr[beg]);  // swaping that to low as low will bw our picot according to logic.

	int pivot = arr[beg];
	int i=beg;
	int j=end;
	while(i<j)
	{
		
		while(arr[i]<=pivot)
		{
			comp++;
			i++;
		} // finding element greater than pivot and is at wrong side.
		while(arr[j]>pivot)
		{
			comp++;
			j--;
		}  // finding element smaller than pivot and is at wrong side.
		if(i<j) // bringing smaller element to left and larger to right.
		{
			comp++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[j],&arr[beg]); //swaping with pivot as they crossed eaach other
	return j;
}
void QuickSort(int arr[],int beg,int end)
{
	if(beg<end)
	{
		int j=partition(arr,beg,end);
		QuickSort(arr,beg,j-1);
		QuickSort(arr,j+1,end);
	}
}
void solve()
{
	int n;
	cout<<"Enter Size of array:\t";
	cin>>n;
	int arr [n];
	cout<<"Enter Array elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	QuickSort(arr,0,n-1);
	cout<<"Array after Quick Sort   : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Comparisions:\t"<<comp;
	cout<<"\nSwaps:\t"<<swaps;
    
}

int main()
{
    int t;
    cout<<"Enter no. of test cases:\t";
    cin>>t;
    while(t--)
    {
        solve();
    }    
     return 0;
}


#include<bits/stdc++.h>
using namespace std;
void swap(int * x,int * y)
{
	int temp = *x;
	* x = * y;
	* y = temp;
}

int partition(int arr[],int beg,int end)
{
	int pivot = arr[beg];
	int i=beg;
	int j=end;
	while(i<j)
	{
		while(arr[i]<=pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<j)
		swap(&arr[i],&arr[j]);
	}
	swap(&arr[j],&arr[beg]);
	return j;
}
int Find_Kth_LargestElement(int arr[],int beg,int end,int k)
{
		if((k>0)&&(beg<end))
		{
			int pos = partition(arr,beg,end);
			if(pos==(k-1))
			return arr[pos];
			else if(pos>(k-1))
			return Find_Kth_LargestElement(arr,beg,pos-1,k);
			else
			return Find_Kth_LargestElement(arr,pos+1,end,k);
		}
		return -1;
}

void solve()
{
    int n;
    cout<<"Enter the size of Array:\t";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of Array\n";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	int x;
    cout<<"Enter the Element to be searched:\t";
    cin>>x;
	int pos = Find_Kth_LargestElement(arr,0,n-1,x);
	if(pos!=-1)
	cout<<x<<" largest element in array is "<<pos<<endl;
	else
	cout<<"Not found \n";
}

int main()
{
    int t;
    cout<<"enter no. of test cases:\t";
    cin>>t;
    while(t--)
    {
        solve();
    }    
    return 0;     
}


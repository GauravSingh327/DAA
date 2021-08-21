#include<bits/stdc++.h>
using namespace std;
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
	sort(arr,arr+n);
	int x;
    cout<<"Enter the Element to be searched in pair :\t";
    cin>>x;
	int l=0;
	int r=n-1;
	bool flag=false;
	while(l<r)
	{
		if((arr[l]+arr[r])==x)
		{
			cout<<arr[l]<<" "<<arr[r]<<"   ";
			l++;
			flag=true;
		}
		else if((arr[l]+arr[r])<x)
		{
			l++;
		}
		else if((arr[l]+arr[r])>x)
		{
			r--;
		}
	}
	if(!flag)
	{
		cout<<"No Such Pair Found";
	}
	cout<<endl;
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


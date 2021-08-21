#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cout<<"Enter size of Array:\t";
	cin>>n;
	char str[n];
	cout<<"Enter elements of array:\n";
	int alphabets[26]={0};
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
		int x =str[i]-97;
		alphabets[x]++;
	}
	int max=0;
	int ans=-1;
	for(int i=0;i<26;i++)
	{
		if(alphabets[i]>max)
		{
			max=alphabets[i];
			ans=i;
		}
		else
		{
			continue;
		}
	}
	if(max>1)
	printf("%c-%d\n",(ans+97),max);
	else
	printf("No Duplicates Found\n");
}
int main()
{
	int t;
	cout<<"Enter no. of test Cases:\t";
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

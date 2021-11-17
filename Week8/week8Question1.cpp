#include<bits/stdc++.h>
using namespace std;
int main()
{
	int V,t;
	cin>>V;
	vector<vector<int>> adjM(V);
	for(int i = 0;i<V;i++)
	{
		for(int j = 0 ;j<V;j++)
		{
			cin>>t;
			adjM[i].push_back(t);
		}
	}
	int S = 0,weight = 0,edge = V-1;
	vector<bool> vis(V,false);
	vis[S] = true;
	while(edge)
	{
		int minj = -1, minedge = INT_MAX;
		for(int j = 0;j<V;j++)
		{
			if(adjM[S][j]&&!vis[j]&&adjM[S][j]<minedge)
			{
				minedge = adjM[S][j];
				minj = j;
			}
		}
		if(minedge != INT_MAX)
		{
			weight += minedge;
			vis[minj] = true;
			S = minj;
			edge--;
		}
		else
		{
			for(int i = 0;i<V;i++)
			{
				if(!vis[i])
				{
					vis[i] = true;
					int minj = -1, minedge = INT_MAX;
					for(int j = 0;j<V;j++)
					{
						if(adjM[i][j]&&adjM[i][j]<minedge)
						{
							minj = j;
							minedge = adjM[i][j]; 
						}
					}
					weight += minedge;
					edge--;
				}
			}
		}		
	}
	cout<<"Minimum Spanning Weight: "<<weight;
	return 0;
}

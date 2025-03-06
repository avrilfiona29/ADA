#include<stdio.h>
int main()
{
	int i,j,k,n,source;
	int w[50][50];
	int visited[20];
	int minwt,totalcost=0,ev=0,sv=0;
	printf("Number of vertices/nodes in graph:\n");
	scanf("%d",&n);
	printf("Enter the weight/cost matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&w[i][j]);
		}
	}
	printf("Enter the source vertex to start:\n");
	scanf("%d",&source);
	for(i=0;i<=n;i++)
		visited[i]=0;
	visited[source]=1;
	printf("Min weight selected for spanning tree:");
	for(i=1;i<n;i++)
	{
		minwt=999;
		for(j=1;j<=n;j++)
		{
			if(visited[j]==1)
			{
				for(k=1;k<=n;k++)
				{
					if(visited[k]!=1&&w[j][k]<minwt)			
					{
						sv=j;
						ev=k;
						minwt=w[k][j];
					}
				}
			}
		}
		totalcost+=minwt;
		visited[ev]=1;
		printf("%d->%d cost=%d\n",sv,ev,minwt);
	}
	printf("The total cost of minimum spanning tree is %d",totalcost);
	return 0;
}
			

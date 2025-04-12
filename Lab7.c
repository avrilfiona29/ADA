#include<stdio.h>
#define MAX_ITEMS 10
int knapSack( int W int wt[], int val[] int n)
{
  int i,j;
  int v[MAX_ITEMS +1][W+1];
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=W;j++)
    {
      if(i==0||j==0)
      {
        v[i][j]=0;
      }
      else if(j-wt[i]<0)
      {
        v[i][j]=v[i-1][j];
      }
      else
      {
        v[i][j]=max(v[i-1][j],val[i]+v[i-1][j-wat[i]]);
      }
    }
  }
  return v[n][W];
}
int max(int a,int b)
{
  return (a>b)?a:b;
}
int main()
{
  int i,n,W,wt[MAX_ITEMS],val[MAx_ITEMS];
  printf("Enter the number of Items:");
  scanf("%d",&n);
  printf("Enter the max capacity:");
  scanf("%d",&W);
  printf("Enter the weight:");
  for(i=i;i<=n;i++)
  {
    scanf("%d",&wt[i]);
  } 
  printf("Enter the profit values:");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&val[i]);
  }
  printf("The minimum profit is %d\n",knapSack(W,wt,val,n));
}

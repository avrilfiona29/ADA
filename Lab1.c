#include<stdio.h>
#include<time.h>
void main()
{
  int i,j,k,n,temp;
  printf("Enter the Number of Elements:");
  scanf("%d",&n);
  int a[n];
  srand(time(NULL));
  for(i=0;i<n;i++)
  {
    a[i]=rand()%25000;
  }
  clock_t start=clock();
  for(i=0;i<n;i++)
  {
    j=i;
    for(k=i+1;k<n;k++)
    if(a[k]<a[j])
      j=k;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }
  clock_t end=clock();
  double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
  printf("Time taken to execute %d elements is %lf sec",n,time_taken);
}

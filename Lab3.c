#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b
  *b=temp;
}
void partition(int arr[],int low,int high)
{
  int pivot=arr[low];
  int i=low+1;
  int j=high;
  while(i<=j)
  {
      while(i<=high && arr[i]<=pivot)
        i++;
      while(arr[j]>pivot)
        j--;
      if(i<j)
        swap(&arr[i],&arr[j]);
  }
  swap(&arr[low],&arr[j]);
  return j;
}
void quickSort(int a[],int low,int high)
{
  if(low<high)
  {
    int pivotIndex=partition(arr,low,high);
    quickSort(arr,low,pivotIndex-1);
    quickSort(arr,pivotIndex+1,high);
  }
}
void main()
{
  int n,i;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  int arr[n];
  srand(time(NULL));
  for(i=0;i<n;i++)
  {
    arr[i]=rand()%100000;
  }
  clock_t start=clock();
  quickSort(arr,0,n-1);
  clock_t end=clock();
  double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
  printf("Time taken for sorting %f seconds",timetaken);
}

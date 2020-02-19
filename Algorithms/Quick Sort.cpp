#include<bits/stdc++.h>
using namespace std;

int q;

void swap(int* i,int* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}

int Partition(int arr[],int p,int r)
{
	int x=arr[r];
	int i=p-1;
	int j;
	for(j=p;j<r;j++)
	{
		if(arr[j]<=x)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return i+1;
}

void QuickSort(int arr[],int p,int r)
{
	if(p<r)
	{
		q=Partition(arr,p,r);
		QuickSort(arr,p,q-1);
		QuickSort(arr,q+1,r);
	}	
}

int main()
{
	int n;
	cout<<"Enter size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter values"<<endl;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	QuickSort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

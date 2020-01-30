#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int low,int mid1,int mid2,int high,int dest[])
{
	int i=low,j=mid1,k=mid2,l=low;
	/*Take smallest elements and store them in the array*/
	while((i<mid1)&&(j<mid2)&&(k<high))
	{
		if(arr[i]<arr[j])
		{
			if(arr[i]<arr[k])
			{
				dest[l++]=arr[i++];
			}
			else
				dest[l++]=arr[k++];
		}
		else
		{
			if(arr[i]<arr[k])
			{
				dest[l++]=arr[j++];
			}
			else
				dest[l++]=arr[k++];
		}
	}
	/*When smallest two ranges have elements remaining*/
	while((i<mid1)&&(j<mid2))
	{
		if(arr[i]<arr[j])
			dest[l++]=arr[i++];
		else
			dest[l++]=arr[j++];
	}
	/*When second and third have elements remaining*/
	while((j<mid2)&&(k<high))
	{
		if(arr[j]<arr[k])
			dest[l++]=arr[j++];
		else
			dest[l++]=arr[k++];
	}
	/*When first and third have elements remaining*/
	while((i<mid1)&&(k<high))
	{
		if(arr[i]<arr[k])
			dest[l++]=arr[i++];
		else
			dest[l++]=arr[k++];
	}
	/*copy remaining values if any from the ranges*/
	while(i<mid1)
		dest[l++]=arr[i++];
	while(j<mid2)
		dest[l++]=arr[j++];
	while(k<high)
		dest[l++]=arr[k++];
}

void Mergesort(int arr[],int low,int high, int dest[])
{
	if(high-low<2)
		return;
	int mid1=(2*low+high)/3;
	int mid2=(2*high+low)/3+1;
	
	Mergesort(dest,low,mid1,arr);
	Mergesort(dest,mid1,mid2,arr);
	Mergesort(dest,mid2,high,arr);
	
	Merge(dest,low,mid1,mid2,high,arr);
}

void Mergethree(int arr[],int size)
{
	if(size==0)
		return;
	int farray[size];
	int i;
	for(i=0;i<size;i++)
		farray[i]=arr[i];
	Mergesort(farray,0,size,arr);
	for(i=0;i<size;i++)
		arr[i]=farray[i];
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array"<<endl;
	int i;
	int b[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];

		b[i]=arr[i];
	}
	Mergethree(b,n);
	for(i=0;i<n;i++)
	{
		cout<<b[i];
	}
	return 0;

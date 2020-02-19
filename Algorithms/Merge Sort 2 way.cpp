#include<bits/stdc++.h>
using namespace std;

/*The subarray is arr[l...m] and arr[m+1...r] for 2-way merge sort*/
/*merge(arr,l,m,r) will merge two arrays which are sorted*/
void merge(int arr[],int begin,int mid,int end)
{
	int i,j,k;
	int L[mid-begin+1], R[end-begin];
	
	for(i=0;i<mid-begin+1;i++)
	{
		L[i]=arr[begin+i];
	}
	for(j=0;j<end-mid;j++)
	{
		R[j]=arr[mid+1+j];
	}
	i=0,j=0; /*Initial indexes of left and right subarrays*/
	k=begin; /*Initial index of merged subarray*/
	while((i<mid-begin+1)&&(j<end-mid))
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<mid-begin+1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<end-mid)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void Mergetwo(int arr[],int begin,int end)
{
	if(begin<end)
	{
		int mid=(begin+end)/2;
		Mergetwo(arr,begin,mid);
		Mergetwo(arr,mid+1,end);
		merge(arr,begin,mid,end);
	}
}



int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array"<<endl;
	int i;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		a[i]=arr[i];
	}
	Mergetwo(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}

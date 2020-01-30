#include<bits/stdc++.h>
using namespace std;

void Bubblesort(int arr[],int size)
{
	int j=0,i=0;
	for(j=0;j<size-1;j++)
	{	
		for(i=0;i<size-j-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				arr[i]=arr[i]^arr[i+1];
				arr[i+1]=arr[i]^arr[i+1];
				arr[i]=arr[i]^arr[i+1];
			}
		}
	}
}

int main()
{
	int n,i;
	cout<<"Enter the number of elements in the ternary array"<<endl;
	cin>>n;
	cout<<"Enter the elements in the array"<<endl<<"Note:Ternary array contains only 0,1,2"<<endl;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]!=0&&arr[i]!=1&&arr[i]!=2)
		{
			cout<<"Ternary array doesn't possess this element"<<endl;
			break;
		}
	}
	Bubblesort(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}

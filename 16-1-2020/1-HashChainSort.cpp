#include<bits/stdc++.h>
#include<vector>
using namespace std;

void Chainsort(int arr[],int size)
{
	vector<int> chain[3]; //initialize vector arrays to hold positions of the respective members of the ternary array
	int i,j,k,l;
	for(l=0;l<size;l++)
	{
		if(arr[l]==0)
			chain[0].push_back(l);
		if(arr[l]==1)
			chain[1].push_back(l);
		if(arr[l]==2)
			chain[2].push_back(2);
	}
	for(i=0;i<chain[0].size();i++)
		arr[i]=0;
	for(j=i;j<i+chain[1].size();j++)
		arr[j]=1;
	for(k=j;k<j+chain[2].size();k++)
		arr[k]=2;
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
	Chainsort(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}

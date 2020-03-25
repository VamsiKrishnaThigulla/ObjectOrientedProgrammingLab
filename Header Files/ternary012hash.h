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

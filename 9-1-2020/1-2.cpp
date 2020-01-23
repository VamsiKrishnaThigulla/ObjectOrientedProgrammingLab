#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int l, int r, int x) 
{
	if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return BinarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return BinarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 

int sumexist(int A[],int size,int p)
{
	int diff, exist;
	int i;
	for(i=0;i<size;i++)
	{
		diff=p=A[i];
		exist=BinarySearch(A,0,size,diff);
	}
	return exist;
}

int main()
{
	int size,p;
	cout<<"Enter the number of integers in the array"<<endl;
	cin>>size;
	cout<<"Enter the integer for which sum should exist"<<endl;
	cin>>p;
	cout<<"Enter the members of the array"<<endl;
	int i;
	int A[size];
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	sort(A,A+size);
	for(i=0;i<size;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	if(sumexist(A,size,p))
	{
		cout<<"There exist two integers in the array such that their sum is equal to "<<p<<endl;
	}
	else
		cout<<"There exist no two integers in the array such that their sum is equal to "<<p<<endl;
	return 0;
}

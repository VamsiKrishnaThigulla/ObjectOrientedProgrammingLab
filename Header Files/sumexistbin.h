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

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int begin, int end, int x) 
{
	if (end >= begin) 
	{
        int mid = (begin+end)/2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid+1;
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x) 
            return BinarySearch(arr,begin,mid - 1,x);
        // Else the element can only be present
        // in right subarray
        return BinarySearch(arr,mid + 1,end,x);
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}

void BinaryInsertionSort(int arr[],int size)
{
	int i,j,location,selected;
	for(i=1;i<size;i++)
	{
		j=i-1;
		selected=arr[i];
		//use BinarySearch to find the optimal location for the integer selected to be inserted in the array
		location=BinarySearch(arr,0,i,selected);
		
		//move all the elements after location by 1 to insert selected in location
		while(j>=location)
		{
			arr[j+1]=arr[j];
			j--;
		}
		//after exiting the loop, j=location-1
		arr[j+1]=selected; //insert selected in the spot of location i.e. j+1
	}
}

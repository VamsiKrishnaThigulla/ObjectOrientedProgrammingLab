void BubbleSort(int arr[],int size)
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

void InsertionSort(int a[],int size)
{
	int i,j,temp;
	int t;
	i=1;
	for(;i<size;i++)
	{	
	j=i-1;
	t=a[i];
	while(j>=0 && a[j]>t)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=t;
	}
}

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
        swap(&arr[min_idx], &arr[i]); 
        arr[i]=arr[i]^arr[min_idx];
		arr[min_idx]=arr[i]^arr[min_idx];
		arr[i]=arr[i]^arr[min_idx];
    } 
}



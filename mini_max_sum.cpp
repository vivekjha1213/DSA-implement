#include<iostream>
using namespace std;



void print_array(int arr[],int n){

for (int i = 0; i < n; ++i)
{
	cout<<arr[i];
	cout<<"\n";
}


}

void bubble(int arr[],int n){


	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n-1; ++j)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void mini_max_sum(int arr[],int n){


int mini = 0, max = 0, sum = 0;


mini = arr[0];
max =  mini;
sum = mini;

for (int i = 1; i < n; ++i)
{
sum += arr[i];

// keep updating the entire list 
// finding the minimum elements sum..

if (arr[i]<mini)
 {
 	mini = arr[i];

 } 
 // keep updating the entire list..
 // finding the maximum elements sum..
 if (arr[i]>max)

 {
 

max =  arr[i];





 }
}
 

 cout<<"\t"<<sum-arr[4]<<"\t"<<sum-arr[0]<<endl;





}

int main()
{
	int arr[] = {1,2,3,4,5};

	int n = sizeof(arr)/sizeof(arr[0]);
mini_max_sum(arr,n);


//bubboriginal ::::::::::::::::::::::::
 

//	print_array(arr,n);

// int arr1[] = {1,2,3,4,5};

// 	int n1= sizeof(arr1)/sizeof(arr1[0]);
// mini_max_sum(arr,n);
	
	return 0;
}
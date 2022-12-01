#include <iostream>
#include<algorithm>

using namespace std;


int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}


int main()
{
	int arr[] = { 3, 4, 1, 7, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
	
	int x = 3;
    int k=7;

	int res1=search(arr,n,x);

    int res2=search(arr,n,k);
    cout<<res1<<endl;
    cout<<res2<<endl;


	
		

	return 0;
}

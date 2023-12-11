#include <bits/stdc++.h>
using namespace std;

/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/
int partitionArray(int input[], int low, int high) {
	// Write your code here
	int pivot=input[low];
	int i=low;
	int j=high;

	while(i<j){
		while(input[i]<=pivot && i<=high-1){
			i++;
		}
		while(input[j]>pivot && j>=low+1){
			j--;
		}

		if(i<j){
			swap(input[i], input[j]);
		}
	}

	swap(input[low], input[j]);
	
	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start<end){
		int pIndex=partitionArray(input, start, end);
		quickSort(input, start, pIndex-1);
		quickSort(input, pIndex+1, end);
	}
}


int main(){
  int n;
  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  quickSort(arr, 0, n-1);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }


  return 0;
}
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
	for (int i=0;i<n-1;i++){
		int min =i;
		for (int j=i;j<n;j++){
			if (arr[j]<arr[min])
				min = j;
		}
		int temp = arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
int main(){
	int n;
	cout << "Enter length of the array: ";
	cin >> n;
	int arr[n];
	cout << "Enter array elements: ";
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << "Before sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	selectionSort(arr,n);
	cout << "After sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

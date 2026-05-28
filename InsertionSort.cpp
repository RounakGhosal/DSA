#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
	for (int i=0;i<=n-1;i++){
		int j=i;
		while (j>0 && arr[j-1]>arr[j]){
				int temp = arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
				j--;
		}
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
	insertionSort(arr,n);
	cout << "After sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

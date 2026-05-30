#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
	for (int i=0;i<n-1;i++){
		int swap =0;
		for (int j=0;j<n-1-i;j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swap =1;
			}
		}
		if (swap==0)
			break;
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
	bubbleSort(arr,n);
	cout << "After sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

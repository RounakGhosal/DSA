#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int> &arr,int low,int high){
	int pivot =arr[low];
	int i = low;
	int j = high;
	while(i<j){
		while(arr[i]<=pivot && i<= high-1){
			i++;
		}
		while(arr[j]>pivot && j>= low-1){
			j--;
		}
		if (i<j){
			int temp = arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	int temp=arr[j];
	arr[j]=arr[low];
	arr[low]=temp;
	return j;
}
void quickSort(vector <int> &arr,int low,int high){
	if (low < high){
		int part=Partition(arr,low,high);
		quickSort(arr,low,part-1);
		quickSort(arr,part+1,high);
	}
}
int main(){
	int n;
	cout << "Enter length of the array: ";
	cin >> n;
	vector <int> arr;
	cout << "Enter array elements: ";
	for (int i=0;i<n;i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	cout << "Before sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSort(arr,0,n-1);
	cout << "After sorting:-" << endl;
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}

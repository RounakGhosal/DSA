#include<iostream>
using namespace std;
int main(){
	char c =65;
	int n;
	cout << "Enter value of n: ";
	cin >> n;
	for (int i=0;i<n;i++){
		for(int j=n;j>i;j--){
			cout << c;
			c++;
		}
		cout << endl;
		c = 65;
	}
	return 0;
}

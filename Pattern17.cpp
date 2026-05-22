#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter value of n: ";
	cin >> n;
	char c;
	for (int i=0;i<n;i++){
		c = 65+(n-i-1);
		for (int j=0;j<=i;j++){
			cout << c;
			c++;
		}
		cout << endl;
	}
	return 0;
}

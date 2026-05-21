#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter value of n: ";
	cin >> n;
	char c = 65;
	for (int i=0;i<n;i++){
		c = 65;
		for (int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for (int j=1;j<=(2*i)+1;j++){
			cout << c;
			if (j<=(2*i+1)/2)
				c++;
			else
				c--;
		}
		cout << endl;
	}
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cout <<  "Enter A and B: ";
	int a, b;
	cin >> a >> b;
	cout << "A + B = " << a + b << '\n';
	cout << "A - B = " << a - b << '\n';
	cout << "A * B = " << a * b << '\n';
	cout << "A / B = " << a / b << '\n';
	cout << "Maximum = " << max(a, b) << '\n';
}
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	cout <<  "Enter A and B: ";
	double a, b;
	cin >> a >> b;
	cout << "A + B = " << a + b << '\n';
	cout << "A - B = " << a - b << '\n';
	cout << "A * B = " << a * b << '\n';
	cout << "A / B = " << a / b << '\n';
	cout << "Maximum = " << max(a, b) << '\n';
	cout << "Minimum = " << min(a, b) << '\n';
	system("pause");
}
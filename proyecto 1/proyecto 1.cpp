#include<iostream>

using namespace std;
const int num = 8;
int main() {
	int nums[num];
	int total = 0;
	for (int i = 0; i < num; i++) {
		cout << "por favor introduzca el numero:" << endl;
		cin >> nums[i];
		total += nums[i];
	}
	cout << "el total de numeros es: " << " = " << total << endl;
	system("pause");

	return 0;
}
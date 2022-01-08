#include <iostream>

using std::cin;
using std::cout;

int main() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 > 0 && num2 > 0 && num3 > 0)
		cout << "+";

	if (num1 < 0 && num2 < 0 && num3 < 0)
		cout << "-";

	if (num1 == 0 && num2 == 0 && num3 == 0)
		cout << "0";
	
	cout << " ";

	return 0;
}
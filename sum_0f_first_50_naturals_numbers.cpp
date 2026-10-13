#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int naturalno = 50;
	for (int i = 1;i <= naturalno;i++) {
		sum += i;
	}
	cout << "Sum of Natural Number(1 to 50): " << sum;
	return 0;
}

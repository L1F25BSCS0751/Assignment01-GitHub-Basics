/*
Program:Sum of first 50 natural numbers
Name: Abdul Mughees
Reg No: L1F25BSCS0751
Assignment: 01- Getting start with GitHub
*/
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int naturalno = 50;
	//Method 1
	for (int i = 1;i <= naturalno;i++) {
		sum += i;
	}
	cout << "Sum of Natural Number(1 to 50 via loop): " << sum<<endl;
	//Method 1
	int sumformula = naturalno * (naturalno + 1) / 2;
	cout << "Sum of Natural Number(1 to 50 via formula): " << sumformula << endl;


	return 0;
}

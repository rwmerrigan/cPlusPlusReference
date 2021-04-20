#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() 
{
	double num;
	cout << "Enter a number: ";
	cin >> num;
	if (cin) 
	{
		cout << "Your number is " << num << endl;
	}
	else 
	{
		cout << "Thats not a valid number";
	}
}


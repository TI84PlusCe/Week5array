#include <iostream>
using namespace std;

int main()
{
	cout << "Multiplication Table \n";
	cout << "-----------------------";

	for (int r = 1; r <= 12; r++)
	{
		cout << "\n Table of " << r << endl;
		cout << "----------------------";
		for (int c = 1; c <= 12; c++)
		{
			cout << r << " * " << c << " = " << (r * c) << endl;
		}
		
	}
}


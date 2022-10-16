/*
	6. Without coping the following code on compiler,
	Fix the issues in code to make it print the following output,
	then write the fixed code.
 */

#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 5; i++) {

		for (int j = 1; j <= 5; j++)
		{
			if (i == j)
				cout << j << " ";
		}

		cout << i << endl;
	}

	return 0;
}
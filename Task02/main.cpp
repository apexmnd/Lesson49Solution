#include "util.h"

int main() {
	int array[DEF_SIZE];

	int size;

	do
	{
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	init_random(array, size, -10, 20);

	cout << "Array: " << convert(array, size) << endl;

	int count = count_negative_elements(array, size);

	cout << "Array has " << count << " negative elements.\n";

	return 0;
}
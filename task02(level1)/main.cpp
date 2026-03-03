#include"util.h"
int main() {
	int array[DEFAULT_SIZE];
	int length;
	int number;

	do {
		system("cls");
		cout << "Input the size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);
	print("\n odd numbers is ");
	print(to_string(cout_odd_numbers(array, length)) + ".\n");

	return 0;
}
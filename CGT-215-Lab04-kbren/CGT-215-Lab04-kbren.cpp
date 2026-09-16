

#include <iostream>

using namespace std;

//print menu choices for user
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorialClass() {

	int n;

	//enter starting number
	cout << "Please enter a number greater than 1." << endl;
	cin >> n;

	int total = 1;

	//check to make sure number isn't 1
	if (n <= 1)
		cout << "This number will lead to an error. Please enter a new number." << endl;
	//keep multiplying numbers until i = the factorial number
	else {
		for (int i = 1; i <= n; ++i) {
			total *= i;
			cout << i << " * ";
		}
		cout << " = ";
		cout << "Factorial of " << n << " = " << total << endl;
	}	
}

void arithmeticClass() {

	int a, b, n;

	//enter numbers for calculation
	cout << "Enter a number to start at" << endl;
	cin >> a;
	cout << "Enter a number to add each time" << endl;
	cin >> b;
	cout << "Enter the number of elements in the series" << endl;
	cin >> n;

	int sum = a;

	//print starting number
	cout << a;

	for (int i = 0; i < n - 1; i++) {
		//loop until i is equal to n
		int elem = a + i * b;
		cout << " + " << elem;
		sum += elem;
	}
	//print sum
	cout << " = " << sum << endl;
	cout << "Sum of series: " << sum << endl;
}

void geometric() {

	int r, a, n;

	//enter numbers for calculation
	cout << "Enter a number to start at" << endl;
	cin >> a;
	cout << "Enter a number to multiply by each time" << endl;
	cin >> r;
	cout << "Enter the number of elements in the series" << endl;
	cin >> n;

	int total = a;
	int elem = a;

	//print starting number
	cout << a;

	//loop for the number of elements in the series -1, since we already printed the starting number
	for (int i = 0; i < n - 1; i++) {
		elem = elem * r;
		cout << " + " << elem;
		total += elem;
	}
	//print total
	cout << " = " << total << endl;
	cout << "Total of series: " << total << endl;

}

int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		//quit if user chooses an invalid choice or to quit
		if (choice > 3 || choice < 1) {
			return 0;
		}

		else if (choice == 1) {
			factorialClass();
		}

		else if (choice == 2) {
			arithmeticClass();
		}

		else if (choice == 3) {
			geometric();
		}

		cout << "Go Again? [Y/N] " << endl;
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
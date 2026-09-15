

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
	float factorial = 1.0;

	cout << "Please enter a number greater than 1." << endl;
	cin >> n;

	//check to make sure number isn't 1
	if (n <= 1)
		cout << "This number will lead to an error. Please enter a new number." << endl;
	else {
		for (int i = 1; i <= n; ++i) {
			//loop until i is greater than n, multiplying each time
			factorial *= n;
		}
		cout << "Factorial of " << n << " = " << factorial << endl;
	}
		
}

void arithmeticClass() {

	int a, b, n;

	cout << "Enter a number to start at" << endl;
	cin >> a;
	cout << "Enter a number to add each time" << endl;
	cin >> b;
	cout << "Enter the number of elements in the series" << endl;
	cin >> n;

	int sum = 0;

	for (int i = 0; i < n; i++) {
		//loop until i is equal to n
		int elem = a + i * b;
		cout << elem;
		sum += elem;
		cout << " + " ;
	}
	cout << "Sum of series: " << sum << endl;
}

void geometric() {

	cout << "This shows that this class ran" << endl;

}

int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;

		//quit is user chooses an invalid choice or to quit
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

		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
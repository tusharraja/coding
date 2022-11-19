#include <iostream>
using namespace std;

// int *x = &y;

void increment (int *x, int *y) { // x and y are formal parameters

	*x = *x + 1;
	
	// x++;
	
	*y = *y + 2;
	
	//y = y + 2;

	//cout << x << ": " << y << endl;
	
	cout<< *x <<": "<< *y <<endl;
	
}

//Main Code

int main() {

	int x = 10, y = 20;

	increment (&x, &y); // a and b are actual parameters

	cout << x << ": " << y;
	return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
string message="\nLearn from your mistakes!";
cout << message << endl;
len = message.length;
cout << "Length of the string: " << len << endl;
// And a random number in addition:
int a, b;
a = srand(12);
b = rand( a );
cout << "\nRandom number: " << b << endl;
return 0;
}

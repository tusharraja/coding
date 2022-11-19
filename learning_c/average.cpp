#include <iostream>
using namespace std;
int main()
{
int x, count = 0;
float sum = 0.0;
cout << "Please enter some integers:\n"
"(Break with any letter)"
<< endl;
while( cin >> x )
{
sum =x+sum;
count=count+1;
}
cout << "The average of the numbers: "
<< sum / count << endl;
return 0;
}
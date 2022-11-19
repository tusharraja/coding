#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
string s("spring flowers ");
cout << right // Left-aligned
<< setfill('?') // Fill character ?
<< setw(20) << s ; // Field width 20 
return 0;
}
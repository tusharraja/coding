#include <iostream>
#include <iomanip>
using namespace std;
int n;
int main()
{cin>>n;
if( n > 0 )
{ if( n%2 == 1 )
cout << " Positive odd number \n";
else cout<<"even";
}
else
cout << " Negative number or zero\n";
return 0;
}
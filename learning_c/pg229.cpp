#include <string>
namespace MySpace 
{
std::string mess = "Within namespace MySpace"; 
int count = 0;
double f( double); }
namespace YourSpace {
std::string mess = "Within namespace YourSpace";
 void f( )
{mess += '!'; }
}
namespace MySpace {
int g(void);
double f( double y)
 {
return y / 10.0; }
 }
int MySpace::g( ) {
return ++count; }


#include <iostream> 
int main() {
		std::cout << "Testing namespaces!\n\n" 
		<< MySpace::mess 
		<< std::endl;
MySpace::g();
std::cout << "\nReturn value g(): " << MySpace::g() 
<< "\nReturn value f(): " << MySpace::f(1.2) 
<< "\n---------------------" << std::endl;
YourSpace::f();
std::cout << YourSpace::mess << std::endl; 
return 0;
}
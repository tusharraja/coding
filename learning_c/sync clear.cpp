// Inputs an article label and a price
#include <iostream> // Declarations of cin, cout,...
#include <iomanip> // Manipulator setw()
#include <string>
using namespace std;
int main()
{
string label;
double price;
cout << "Please enter an article label: ";
cin >> setw(16); // or: cin.width(16);
cin >> label;
cin.sync(); 
cin.clear();
cout << "\nEnter the price of the article: ";
cin >> price;
cout << fixed << setprecision(2)
<< "\nArticle:"
<< "\n Label: " << label
<< "\n Price: " << price << endl;
return 0;
}

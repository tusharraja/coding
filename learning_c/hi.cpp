#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string a;
    cin>>a;
    cout<<"("<<a.substr(0,3)<<")"<<" "<<a.substr(3,3)<<"-"<<a.substr(6,9);
}
#include<iostream>
using namespace std;

int main(){
	int a=5;
	int b=4;
	int c=2;
	
	int res= a++ + b++ + --c+ b++ + --a+ c++;
	cout<<res<<" "<<a<<b<<c;
	return 0;	
	
}
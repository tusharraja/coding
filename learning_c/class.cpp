#include<iostream>
using namespace std;

class Employee{
	private:
		int a,b;
		public:
			int c,d;
			void setdata(int a1,int b1);
			void getdata(){
				cout<<a<<b<<c<<d;
			};
};

void Employee::setdata(int a1,int b1){
	a=a1;
	b=b1;
}

int main(){
	Employee monu;
	monu.setdata(1,2);
	//monu.a=1;
	//monu.b=88;
	monu.c=3;
	monu.d=4;
	monu.getdata();
	string s="0123456789";
	cout<<s.substr(4,5);
	return 0;
}
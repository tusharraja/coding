#include <iostream>
using namespace std;
int main(){
	int marks[]={1,2,3,4,5,6};
	cout<<marks[2];
	char maths[5];
	maths[1]='A';
	maths[2]='i';
	maths[3]='k';
	maths[4]='J';
	maths[7]='B';
for(int i=0;i<5;i++){
	cout<<maths[i]<<endl;
}
cout<<maths[7];
	return 0;
}
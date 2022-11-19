#include <iostream>
#include <vector>

using namespace std;

vector<int> inputVector(int  n){
	
	vector<int> arr;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		arr.push_back(x);	
	}
	
	return arr;
}

void printVector(vector<int>arr){
	
	
	for(int x: arr){
		cout<<x<<" ";
	}
	cout<<endl;
	
}

int main(){
	int n;
	cin>>n;
	vector<int> arr = inputVector(n);
	printVector(arr);
}
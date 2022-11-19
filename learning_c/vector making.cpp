#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}

int main(){

	int element;
	int size;
	vector<int> v;
	cout<<"enter size";
	cin>>size;
	

		for (int i=0;i<size;i++){
			cout<<"enter elements:  ";
			cin>>element;
			v.push_back(element);
	}
	display(v);
	cout<<endl;
	v.pop_back();
	cout<<"we use pop back so last element got deleted ";
	display(v);
	cout<<endl;

	vector<int>::iterator iter = v.begin()+1;
	
	v.insert(iter,888);

	display(v);
	cout<<endl;

return 0;

}

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"@"<<endl;
		}
		for(int k=1;k<2;k++){
		cout<<i<<endl;
		}
		
	}

return 0;
}
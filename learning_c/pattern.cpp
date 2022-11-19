#include <iostream>
using namespace std;

void solution (int k){
	
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i;j++){
			if(j==1)
				cout<<"*";
			else if(j==i)
				cout<<"*";
			else if(i==k)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	
	
	return;
}

int main(){
	
	int t;
	cin>>t;
	
	while(t!=0){
		
		int k;
		cin>>k;
		
		solution(k);
		
		t--;
	}
	
	
	//solve(k);
	

	return 0;
}
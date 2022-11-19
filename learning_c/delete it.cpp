#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int basic;
    cin>>basic;
    int tot;
    string grade;
    cin>>grade;
    int allow;
    if(grade=="A"){
        allow=1700;
    }
    else if(grade=="B"){
        allow=1500;
    }
    //if(grade!="A"||grade!="B"){
      //  allow=1300;
    //}
    else(allow=1300);
        
    tot=basic+(0.2*basic)+(0.5*basic)+allow-(0.11*basic);
    cout<<tot<<endl;
    
    int arr[]={6,8,9};
    int ele;
    for(auto ele:arr){
    	cout<<ele;
	}

    return 0;
}
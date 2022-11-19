#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int basic;
    cin>>basic;
    char ch;
    cin>>ch;
    int tot;
    string grade;
    int allow;
    if(grade=="A"){
        allow=1700;
    }
    if(grade=="B"){
        allow=1500;
    }
    if(grade=="C"||grade!="A"||grade!="B"){
        allow=1700;
    }
    
    tot=1.59*basic+allow;
    cout<<tot;
    

    return 0;
}
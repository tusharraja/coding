#include <bits/stdc++.h> 
#include <iostream>

using namespace std;


int main(){
    int S;
    int E;
    cin>>S>>E;
    int flag=0;
    int count=0;
    for(int demo=S;demo<=E;demo++){
      for(int i=2;i<=demo;i++){
          if(demo%i==0){
              flag=1;
              break;
          }
          if (flag==0){
              count=count+1;
          }
          
      }
       
    }
    
    
    
    
    cout<<count;
    return 0;
    
}
#include <bits/stdc++.h> 
using namespace std;
    int fib(int n){
    
    
    int c;
    while(n>0){
     if(n==1||n==2){return 1;}
     else return fib(n-1)+ fib(n-2);
    n--;
    
    }
   
    
}
int main(){
    int item;
    cin>>item;
    for(int i=0;i<item;i++){
        int n;
        cin>>n;
        cout<<fib(n)<<endl;
    }
    
    return 0;
}
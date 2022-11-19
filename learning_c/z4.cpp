#include <bits/stdc++.h> 
using namespace std;

int fibonacciNumber(int n) {
  
   if (n==0)
       return 0 ;
   if (n==1)
       return 1 ;
   
   int ans = fibonacciNumber(n-1) + fibonacciNumber(n-2);
   
   return ans ;
}

 int main(){
     int testcase;
     cin>>testcase;
     for(int randoms=0;randoms<testcase;randoms++){
         int digit;
         cin>>digit;
         cout<<fibonacciNumber(digit)<<endl;
         
     }
     return 0;
 }
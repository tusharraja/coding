#include <bits/stdc++.h> 
#include <iostream>

using namespace std;


int totalPrime(int i,int j){ 				//i=2 j=5
    for(int x=i;x<=j;x++){                  //x=2 
        for(int p=2;p<=x;p++){				//p=2
            int c;							//
            c=x%p;							//c=
            int count=0;					//
            if(c==0){						//
            	count=count+1;				//
			}								//
			if(count==0){					//
				cout<<x<<endl;				//
				return x;					//
			}
                
            }
        }
    }


int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x;
    int evensum=0;
    int oddsum=0;
    x=n%10;
    while(n>0){
    if(x%2==0){
        evensum=evensum+x;
        }
    else(oddsum=oddsum+x);
    n=n/10;
    x=n%10;
    }
    
    cout<<evensum<<" "<<oddsum;
    

    return 0;
}
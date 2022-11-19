#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x;
    
    int evensum=0;
    int oddsum=0;
    
    for(int x=0;x>=0;x=n%10){
    if(x%2==0){
        evensum=evensum+x;
        
    }
    else(oddsum=oddsum+x);
    }
    cout<<evensum<<" "<<oddsum;
    

    return 0;
}
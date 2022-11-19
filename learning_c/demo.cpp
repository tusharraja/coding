#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int x=1;x<=n;x++){
        int y;
        cin>>y;
        arr.push_back(y);    
    }
    
    /*for(int y:arr){
        cout<<y<<" ";
    }*/
    
    int z;
    cin>>z;
    
    arr.erase(arr.begin()+(z-1));
    
    /*for(int k:arr){
        cout<<k<<" ";  */
        
        
    int u;
    int p;
    cin>>u>>p;
    
    arr.erase(arr.begin()+u,arr.begin()+p);
    
    cout<<arr.size()<<endl;
    
    int h;
    for(int h:arr){
        cout<<h<<" ";
    }
    
       
    return 0;
}

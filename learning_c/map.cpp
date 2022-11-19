#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    map<string,int>dic;
    for(int a=1;a<=n;a++){
      int b;
      string c;
      int d;
      cin>>b>>c>>d;
      if(b==1){
          dic.insert(make_pair(c,d));
      }
      if(b==2){
          dic.erase(c);   
      } 
      if(b==3){
          cout<<dic[c];
      }
    }
    return 0;
}
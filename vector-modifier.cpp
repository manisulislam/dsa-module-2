#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>x={10,20,30};
   // vector<int>v={1,3,5};
   // v=x;
  // x.push_back(50);
   x.pop_back();
   
    for(int i=0; i<x.size();i++){
        cout<<x[i]<<endl;

    }
    return 0;
}
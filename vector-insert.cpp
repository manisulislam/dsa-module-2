#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    //v.insert(v.begin()+2, 40);
    vector<int>v2={10,20,40};
    v.insert(v.begin()+2,v2.begin(), v2.end());
    for(int x:v){
        cout<<x<<endl;
    }
    return 0;
}
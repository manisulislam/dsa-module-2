#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,5,9,7};
    //v.erase(v.begin()+2);
    v.erase(v.begin()+2, v.end()-1);
    for(int x:v){
        cout<<x<<endl;
    }
    return 0;
}
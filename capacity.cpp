#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    // cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(50);
    cout<<v.capacity()<<endl;
    v.push_back(90);
    cout<<v.capacity()<<endl;
    v.push_back(98);
    cout<<v.capacity()<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    for(int i=0;i<5;i++){
        a.push_back(i);
    }
    cout<<"output of begin and end";
    for(auto i=a.begin();i!= a.end();++i){
        cout<<*i<<" ";
    }
    return 0;
}
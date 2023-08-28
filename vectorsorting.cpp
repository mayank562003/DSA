#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1,5,8,20,10,8,5};
    sort(v.begin(),v.end());
    cout<<"sorted \n";
    cout<<"\nvector elements are:\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
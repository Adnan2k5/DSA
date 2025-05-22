#include <bits/stdc++.h>
using namespace std;



int main() { 
    vector<int> v;
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        v.push_back(x);
    }

    v.emplace_back(5);

    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it) << " ";
    }

    cout<<endl;

    
    for(auto it : v){
        cout<< it << " ";
    }
}
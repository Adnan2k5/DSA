#include <bits/stdc++.h>
using namespace std;


int main(){
    int x;
    cin>>x;
    vector<int> div;
    for(int i=1;i*i<=x;i++){
        if(x%i == 0){
            div.push_back(i);
            if(x/i != i){
                div.push_back(x/i);
            }
        }
    }
    sort(div.begin(), div.end());

    for(auto it : div) cout<< it << " ";

    //store in vector or list and sort them
}
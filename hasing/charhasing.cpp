#include <bits/stdc++.h>
using namespace std;




int main(){
    string s;
    cin>>s;
    int charhash[256] = {0};

    for(int i=0;i<s.size(); i++){
        charhash[s[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        char n;
        cin>>n;
        cout<<n<<" "<<charhash[n]<<endl;
    }
}
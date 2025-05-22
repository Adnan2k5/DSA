#include <bits/stdc++.h>
using namespace std;


int main() {
    int x,y,z;
    cin>>x>>y>>z;
    pair<int, int> p = {x, y};
    cout<<p.first << " " << p.second;

    pair<int, pair<int, int>> p2 = {x,{y,z}};
    cout<<endl;
    cout<< p2.first << " " << p2.second.first << " " << p2.second.second;


    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second;
}


#include <bits/stdc++.h>
using namespace std;


int main(){

    //Maximum Heap
    
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);


    cout<< pq.top();


    //Minimum Heap

    priority_queue<int, vector<int>, greater<int>> mpq;

    mpq.push(4);
    mpq.push(2);
    mpq.push(8);
    mpq.emplace(10);

    cout<< mpq.top();
}
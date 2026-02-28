#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(14);
    pq.push(-321);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

}
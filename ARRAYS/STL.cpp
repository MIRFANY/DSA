#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code here
    int arr[5]={1,1,3,3,4};
    int n=5;
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    return 0;
}

// #include<iostream>
// #include<queue>
// #include<map>

// using namespace std;
// int main(){
//     map<int,string> m;
//     m[1]="Irfan";
//     m[2]="Yousuf";
//     m[3]="Mirfany";


//     m.insert( {5,"babbar"});
    
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;

//     }

//     cout<<"finding 13 ->" <<m.count(13)<<endl;

//     m.erase(3);
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;

//     }
// }


---------
priority queue

//     //max heap
//     priority_queue<int> maxi;

//     //min - heap

//     priority_queue<int,vector<int>, greater<int> > mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     cout<<"size->"<<maxi.size()<<endl;

//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();

//     }
//     cout<<endl;



// }


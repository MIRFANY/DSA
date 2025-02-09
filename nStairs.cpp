#include<iostream>
using namespace std;
int main(){
    int nStairs=5;
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }

    int ans = cdwtcs(nStairs -1) + cdwtcs(nStairs -2);

    return ans;
}
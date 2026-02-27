#include<iostream>
#include<vector>
using namespace std;

int maxNoOfStrings(vector<string> & arr){
    int n= arr.size();
    int cnt=0;
    for(int i=0;i<n-1;i++){
        string rev = arr[i];
        for(int j=i+1;j<n;j++){
            if(rev== arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    string arr='irfan';
}
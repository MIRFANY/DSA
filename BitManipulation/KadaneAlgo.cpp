#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int sum=0;
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxi=max(maxi,sum);
        }
    }

    cout<<"The maximum of the all is: "<<maxi<<endl;
    return 0;

}
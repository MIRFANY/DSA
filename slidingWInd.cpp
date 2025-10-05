//maximum subarray sum of size k using sliding window
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n= sizeof (arr)/ sizeof (arr[0]);
    int k=3;

    //sliding window;
    int maxSum=0;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+= arr[i];

    }

    int i=1;
    int j=k;
    int maxIdx=0;
    maxSum=prevSum;
    while(j<n){
        int currSum= prevSum + arr[j] - arr[i-1];
        if(currSum > maxSum){
            maxSum= currSum;
            maxIdx= i;
        }
        prevSum=currSum;
        i++;
        j++;
    }

    cout<<maxSum<<" ";
    cout<<maxIdx<<" ";



    //Q2. Grumpy shopkeeper problem

    



    

}
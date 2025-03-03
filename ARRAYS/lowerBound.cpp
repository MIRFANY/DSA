#include<iostream>
using namespace std;
int lowerBound(int arr[],int size,int k){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]>=k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

    }
    cout<<"The answer is :"<<s;
}

int firstOcc(int arr[],int size, int k ){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}



int LastOcc(int arr[],int size, int k ){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}




// int binarySearch(int arr[], int size, int k){
//     int s=0,e=size-1;
//     int mid=(s+e)/2;
//     while(s<=e){
//         if(arr[mid]== k){
//             return mid;
//         }
//         else if(arr[mid]>k){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }

//         mid=s+(e-s)/2;
//     }

//     return -1;
// }


int main(){
    int arr[7]={1,2,2,4,5,7,8};
    int n=7,k=2;

    // cout<<"Let's first see how binary search algo works here:"<<binarySearch(arr,n,k)<<endl;

    cout<<"The first occurrence of "<< k<< " is at index :"<<firstOcc(arr,n,k);

    cout<<endl;

    cout<<"The last occurrence of "<<k << " is at index: "<<LastOcc(arr,n,k);
    

}
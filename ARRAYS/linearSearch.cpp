#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main() {
    // your code here
    int arr[10]={5,7,-2,10,22,1,3,4,2,7};

    cout<<"Enter the element to search for "<< endl;
    int key;

    cin>>key;

    bool found = search(arr,10, key);

    if( found ){
        cout<<"Key is found";

    }
    else{
        cout<<"Not found.";
    }
    return 0;
}
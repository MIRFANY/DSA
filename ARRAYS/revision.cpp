//1.Reverse Array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int strt=0;
//     int end=n-1;
//     while(strt<end){
//         swap(arr[strt],arr[end]);
//         strt++;
//         end--;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// //Linear search


// 2. linear search
// int main(){
//     int arr[5]={1,3,5,7,9};
//     int n=5;
//     int key=7;
//     int cnt=0;

//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             cout<<"key found at index"<<i<<" ";
//             cnt=1;
//         }

        
//     }
//     if(cnt==1){
//     cout<<"key found!";
//     }
//     else{
//         cout<<"key not found!";
//     }
// }


//3.find duplicate elt

// int main(){
//     int arr[5]={1,3,1,1,3};
//     int n=5;
//     bool uniqueEltFound=false;
//     for(int i=0;i<n;i++){
//         bool uniqueElt=true;
//         for(int j=0;j<n;j++){
//             if(i!=j && arr[i]==arr[j]){
//                 uniqueElt=false;
//                 break;
//             }

            

//         }
//         if(uniqueElt){
//                 uniqueEltFound=true;
//                 break;
//             }
//     }

//     if(uniqueEltFound){
//         cout<<"unique element found!";
//     }
//     else{
//         cout<<"unique element not found!";
//     }



// }

// Array intersection

// int main(){
//     int arr1[5]={1,3,5,7,9};
//     int arr2[5]={2,4,6,9,1};
//     int n=5;
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr1[i]== arr2[j]){
//                 ans.push_back(arr1[i]);
//             }

//         }
//     }

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }

//second largest

// int main(){
//     int arr[5]={1,2,3,4,9};
//     int n=5;
//     bool isSorted=true;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             isSorted=false;
//             break;
//         }
        
//     }

//     if(isSorted){
//         cout<<"array is sorted!.";
//     }
//     else{
//         cout<<"Not sorted!";
//     }
// }



//remove duplicates

// int main(){

//     int arr[5]={1,3,1,2,3};
//     int n=5;
//     bool isduplicateFound=false;
//     for(int i=0;i<n;i++){
//         bool duplicateElt=false;
//         for(int j=0;j<n;j++){
//             if(arr[i]== arr[j]){
//                 duplicateElt
//             }
//         }


//     }

// }


// void RotateetoRight(int arr[], int n, int k){
//     if(n==0){
//         return ;
//     }

//     k=k%n;
//     if(k>n){
//         return;
//     }
//     int temp[k];

//     for(int i=n-k;i<n;i++){
//         temp[i-n+k]=arr[i];
//     }



// }
// int main(){
//     int arr[5]={1,2,3,4,5};
    
// }
void rotateArray2(int arr[],int n,int k){
  
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+ n);

    cout<<"The elements of array are: ";
    for(int i=0;i<n;i++){

    
    cout<<arr[i]<<" ";
    }



}

void moveZerosToEnd(int arr[],int n){
    int temp[n]={0};
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }

    cout<<"The answer is: "<<endl;

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }


}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}




void rotateArray(int arr[],int n,int k){
    k=k%n;
    //take elts in temp
    int temp[k]={0};
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    //take back all the elts of array into

    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }

    //put the elements back in the array 
    int j=0;
    for(int i=n-k;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

void sorting(int arr[], int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }

}


void selection(){

}






void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

int main(){
    int arr[6]={1,4,3,9,5,6};
    int n=6;
    cout<<"The array after the rotation is: ";
    // rotateArray(arr,6,2);

    // rotateArray2(arr,6,2);

    // moveZerosToEnd(arr,n);


    sorting(arr,n);
    cout<<"The elements of the array are: "<<endl;
    printArray(arr,n);

    return 0;
}





#include<iostream>
#include<cstring>
using namespace std;

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

// void reverseStr(char* str){
//     //start and end lelo pehle
//     char* start= str;
//     char* end= str + strlen(str)-1;

//     //swap characters until pointers until pointers meet
//     while(start<end){
//         char temp = *start;
//         *start= *end;
//         *end=temp;

//         start++;
//         end--;
//     }
// }

void reverseStr(char* str){
    char* start=str;
    char* end= str + strlen(str)-1;
    while(start < end){
    char temp = *start;
    *start= *end;
    *end= temp;

    start++;
    end--;
    }
}



void sumArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    cout<<"The sum of elts of array is :"<<sum<<endl;
}

// 
// Create a function to find the length of a string using pointers.

int stringLength(char* str){
    char* ptr= str;
    int length=0;
    while(*ptr != '\0'){
        length++;
        ptr++;
    }

    return length;
}

int main(){
    int a=3,b=8;
    swap(&a,&b);

    // char str[]="Hello, Irfan";
    // char str[]="Hello , NIT";


    // reverseStr(str);

    // reverseStr(str);

    // cout<<"The reversed string is :"<<str<<endl;
    // cout<<"The reversed string is: "<<str<<endl;

    int *arr= new int(7);
    sumArray(arr,7);


}
#include<iostream>
using namespace std;
class Queue{
    int front,rear,size;
    int *arr;
    public:
    Queue(int s){
        front=rear=-1;
        size=s;
        arr=new int[size];

    }

    void enqueue(int n){
        if(isFull()){
            cout<<"Queue overflow.";
            return;
        }

        arr[++rear]=n;


    }

    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty.";
            return ;
        }

         return arr[front++];

    }

    int front(){
        if(isEmpty()){
            cout<<"Queue is empty.";
            return -1;
        }
        return arr[front];

    }

    int rear(){
        if(isEmpty()){
            cout<<"Queue is empty.";
            return -1;
        }
        return arr[rear];

    }

    bool isEmpty(){
        return (front==-1 || front>rear);

    }

    bool isFull(){
        if()

    }

};

//function to re



int main(){

}







// class Queue{

//     public:
//     int front,rear,size;
//     int *arr;

//     Queue(int s){
//         size=s;
//         front=rear=-1;
//         int *arr= new int[s];
//     }


//     void enqueue(int value){
//         if( front =size-rear ){

//             cout<<"Queue is full.";
//         }
//         if(front==-1){
//             front =0;
//         }
//         arr[++rear]=value;
//     }

//     int dequeue(){
//         if(front==-1  ||  front>rear){
//             cout<<"Queue is empty!";
//         }
//         arr[front++];
//     }

//     bool isEmpty(){
//         return (front == -1 || rear > front);

//     }
//     int Front(){
//         if(front==-1 || front>rear){
//             cout<<"Queue is empty!";
//             return -1;
//         }
//         return arr[front];

//     }

//     int Rear(){
//         if(front ==-1 || front > rear){
//             cout<<"Queue is empty!.";
//             return -1;
//         }
//         return arr[rear];
//     }
// };


// int main(){
//     Queue q(6);
//     q.enqueue(13);
//     q.enqueue(16);
//     q.enqueue(19);

//     cout<<"The front of the queue is :"<< q.Front();

//     cout<<"The rear of the queue is :"<<q.Rear();


//     cout<<"emptiness of the queue:"<<q.isEmpty();

// }
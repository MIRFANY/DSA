#include <iostream>
using namespace std;

class Stack{
    int size,top;
    int *arr;
    public:
    Stack(int s){
        size=s;
        top=-1;
        arr=new int[size];

    }

    void push(int elt){
        if(isFull()){
            cout<<"stack overflow!";
            return ;
        }
        arr[++top]=elt;
    }

    int pop(){
        if(isEmpty()){
            cout<<"stack underflow.";
            return -1;
        }
        int x=arr[top--];
        return x;
    }

    int peek(){
        if(isEmpty()){
            cout<<"Stack underflow!";
        }
        return arr[top];

    }

    bool isEmpty(){
        return top == -1;

    }

    bool isFull(){
        return top == size-1; 
    }

    void display(){
        if(isEmpty()){
            cout<<"stack underflow.";
            return ;
        }
        cout<<"stack elements are:";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }



};

int main() {
    // your code here
    Stack st(6);
    st.push(24);
    st.push(26);

    st.pop();

    st.peek();
    st.isEmpty();
    st.isFull();

    st.display();

    return 0;
}





// #include<iostream>
// using namespace std;
// //arrays implementation

// class Stack{
//     public:
//     int top;
//     int size;
//     int *arr;


//     Stack(int s){
//         size=s;
//         top=-1;
//         arr=new int[size];
//     }

//     int push(int element){
//         if(size)
        
//         arr[++top]=element;
//     }

//     int pop(){
//         if(top<0){
//             cout<<"Stack underflow!";
//             return -1;
//         }
//         return arr[top--];
//     }

//     int peek(){
//         if(top<0){
//             cout<<"stack underflow!";
//             return -1;
//         }
//         return arr[top];
//     }



//     // int size(){
//     //     return size;
//     // }

//     bool isEmpty(){
//         return top==-1;
//     }



// };
// int main(){
//     Stack st(6);
//     st.push(13);
//     st.push(15);
    

// }








// #include<iostream>
// using namespace std;
// class Stack{
//     public:
//     int *arr;
//     int top;
//     int size;

//     //behaviour
//     Stack(int size){
//         this-> size =size;
//         arr = new int[size];
//         top = -1;
//     }




//     void push(int element){
//         if(size - top >1){
//             top++;
//             arr[top]=element;
//         }
//         else{
//             cout<<"stack overflow!.";
//         }

//     }

//     void pop(){
//         if(top >= 0){
//             top--;
//         }
//         else{
//             cout<<"stack underflow!";
//         }

//     }

//     int peek(){
//         if(top >= 0){
//             return arr[top];
//         }
//     }

//     bool isempty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }



// };
// int main(){
//     Stack st(6);
//     st.push(23);
//     st.push(43);
//     st.push(21);
//     st.push(75);

//     cout<< st.peek() <<endl;

//     st.pop();

//     cout<< st.peek() <<endl;

//     st.pop();

//     cout<< st.peek() <<endl;

//     st.pop();

//     cout<< st.peek() <<endl;

//     st.pop();








// / stacks implementatio using linked list



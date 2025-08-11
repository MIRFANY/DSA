#include <iostream>
using namespace std;

int main() {
    int num=5;
    int a=num;
    cout<<"a before "<< num << endl;
    a++;
    cout<<"a after"<< num << endl;

    int *p =&num;
    cout<<"before " << num <<endl;
    (*p)++;
    cout<< "after " << num << endl;
    // copying a pointer 
    int *q = p;
    cout<< p<<"-" << q << endl;
    cout<< *p << "-"<< *q << endl;


    // important concept
    int i=7;
    int *r=&i;
    cout<< (*r)++ <<endl;

    // your code here

    int a[20]={1,2,3,5};
    cout<< &a[0] <<endl;
    cout<< &a << endl;
    cout<< a << endl;




    return 0;
}
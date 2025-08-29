#include <iostream>
using namespace std;

int main() {
    int arr[2][3]={
        {1,4,6},
        {2,4,7}
    };
    int sum=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }

    cout<<"The sum of all the elements of the array is: "<<sum;

    // your code here
    return 0;
}
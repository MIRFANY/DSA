#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=0;i*i <n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void fPrimes(int L, int R){
    bool found = false;
    for(int i=L;i<=R;i++){
        if(isPrime(i)){
            cout<<i<<endl;
            found = true;
        }
    }
    if(!found) return "No Primes found";

}

int main(){

}
#include<bits/stdc++.h>
using namespace std;

// structure to represent the item with value and weight
struct Item {
    int value;
    int weight;
};

class Solution {
    public:
    bool static comp(Item a, Item b){
        double r1 = (double) a.value /(double) a.weight;
        double r2 = (double) b.value /(double) b.weight;
        
        return r1 > r2; // return true if the ratio of item a is grearer than item b


    }
    //function to calculate the maximum value we can get with fractional kanpsack
    double fractionalKnapsack(int W, Item arr[], int n){
        sort(arr, arr+ n, comp);
        int currWeight =0; // curr weight of knapsack
        double finalValue =0.0; // finally value we can achieve

        // iterate through sorted items
    
        for(int i =0; i<n;i++){
            if(currWeight + arr[i].weight <= W){
                currWeight += arr[i].weight;
                finalValue += arr[i].value;

            }
            else{
                // if the item can't be fully added
                int remain =  W - currWeight;
                finalValue += (arr[i].value / (double) arr[i].weight) * remain;
                break;
            }
        }
        return finalValue;

    }
};

int main(){
    int n = 3, weight = 50; 
    // item values and weights
    Item arr[n] = { {10,20}, {60, 10}, {120, 30} };

    Solution obj;

    // calculate the maximum value we can get with the fractional knapsack
    double ans = obj.fractionalKnapsack(weight, arr, n);
    // output the resultl
    cout<< "The maximum value is "<< setprecision(2)<< fixed << ans;
    return 0;


}



//////////complexity_analysis///////////////////

// T.C =  O(nlogn +n); 

//S.c = O(1);
//
//

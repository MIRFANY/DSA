#include<bits/stdc++.h>
using namespace std;

vector<int> minCoins(int V){
    //available coin demoniations
    int coins[] = {1, 2 ,5 ,10, 20, 50, 100, 500, 1000};
    int n=9;

    // vector to store the result
    vector<int> ans;
    //iterate from the largest to smallest denominations
    for(int i =n-1; i>=0; i--){
        //use as many coins as possible 
        while(V >= coins[i]){
            V -= coins[i];
            ans.push_back(coins[i]);
        }

    }
    // return the list of coins used
    return ans;
}


int main(){

    // total amount
    int V = 49;
    // call function to get coin list
    vector<int> ans = minCoins(V);
    //print result

    cout<<"The minimum number of coins is "<< ans.size()<<endl;
    cout<< "The coins are "<< endl;

    for(int coin: ans){
        cout << coin <<" ";
    }
    cout << endl;
    return 0;
}



// compplexity
//T.C : O(V)
//S.C : O(V)
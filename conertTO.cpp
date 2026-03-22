#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;

    int low_cnt=0;
    int uppr_cnt=0;

    for(int i=0;i<s.length();i++){
        if(s[i]>= 65 && s[i]<=90){
            uppr_cnt++;

        }
        if(s[i]>= 97 && s[i]<=122){
            low_cnt++;
            
        }

    }

    if(uppr_cnt> low_cnt){
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 && s[i]<=122){
                s[i]= s[i]+32;
            }
        }
    }

    if(low_cnt>uppr_cnt){
        for(int i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] = s[i]+32;
            }
        }
    }




}
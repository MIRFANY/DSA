#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

    int firstOccu(const vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e){
        mid= s+ (e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        
    }
    return ans;

}
int lastOccu(const vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e){
        mid = s + (e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(k<arr[mid]){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return ans;
}


vector<int> searchRange(vector<int>& nums, int target) {
    int n= nums.size();
    vector<int> result;
    result.push_back(firstOccu(nums, n , target));
    result.push_back(lastOccu(nums, n ,target));

    return result;
    }
};
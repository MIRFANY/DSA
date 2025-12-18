#include<bits/stdc++.h>
using namespace std;

// a structure to represent a job

struct Job{
    //job id

    int id;
    //deadline of job

    int dead;

    //profit if job is completed before or on the deadline

    int profit;

};

class Solution{
    public:
    //comparator function to sort jobs

    bool static comparison(Job a, Job b){
        //sort by profit in descending order

        return (a.profit > b.profit);

    }

    //Function to find the ma xprofit and the number of jobs done 

    pair<int , int> JobScheduling(Job arr[], int n)
    {
        sort (arr, arr+ n, comparison);

        //find the max deadlline among all jobs

        int maxi = arr[0].dead;
        for(int i =1; i<n; i++){
            //get the latest deadline
            maxi = max(maxi, arr[i].dead);
        }

        //initialize the slot arrary to track which time slots are taken 
        int slot[maxi + 1];
        for(int i=0;i<=maxi; i++){
            //mark all slots as unoccupied initially
            slot[i]=-1;
            int countJObs =0, jobProfit =0;

            //iterate through all jobs to find the best possible schedule

            for(int i=0;i<n;i++){
                //find a slot for the current job(starting ffrom its deadline)

                for(int j= arr[i].dead;i>0;j--){
                    //assign the job to the slot
                    slot[j]= i;

                    //increment the numbe rof hobs done 
                    countJobs++;
                    //add the prog=fit of teh job
                    jobProfot += arr[i].profit;

                    break;
                }
            }


        }

        // return the number of jobs done and the total profit
        return make_pair(countJobs, jobProfit);




    }
};





int main(){
    // Driver code

    int n=4;
    //define jobs with id , deadline, and pro fit

    Job arr[n]= {{1,4,20}, {2, 1,10}, {3,2,40}, {4,2,30}};


    solution ob;

    //function call to find the no of jobs done and total profit

    pair<int, int> ans = pb.JobScheduling(arr, n);

    //output the numbe ro f jobs and the tota; profit

    cout<< ans.first << " " << ans.second <<endl;

    return 0;


}
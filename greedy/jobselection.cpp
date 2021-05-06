#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct job{
    char jobname;
    int deadline;
    int profit;
};

bool compare(job a,job b){
    int res=a.profit-b.profit;
    if(res>0){
        return true;
    }
    else{
        return false;
    }
}
void schedulejobs(job arr[], int n){
    bool slot[n];
    int jobscheduled[n];
    
    for(int i=0;i<n;i++){
        slot[i]=false;
    }
    
    for(int i=0;i<n;i++){
        for(int j=min(n,arr[i].deadline)-1;j>=0;j--){
            if(slot[j]==false){
                jobscheduled[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        if(slot[i]==true){
            cout<<arr[jobscheduled[i]].jobname<<"  ";
        }
    }
}
int main()
{
job jobs[]={{'A',3,500},{'B',1,100},{'C',3,600},{'D',1,500},{'E',2,400}};

sort(jobs,jobs+5,compare);
// for(int i=0;i<5;i++){
//     cout<<jobs[i].jobname<<" ";
// }

schedulejobs(jobs,5);


    return 0;
}

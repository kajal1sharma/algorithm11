
#include <iostream>

using namespace std;

int knapsack(int wt[],int profits[],int w,int n){
    //columns =>max weight
    //rows=>number of items
    int arr[n+1][w+1];
    
    
    for(int i=0;i<=n;i++){
        
        for(int j=0;j<=w;j++){
            
            if(i==0){
                //row first
                arr[i][j]=0;
            }
            else if(j==0){
                //first col
                arr[i][j]=0;
            }
            else if(wt[i-1]<=j){
                int a=profits[i-1]+arr[i-1][j-wt[i-1]];
                int b=arr[i-1][j];
                if(a>b){
                    arr[i][j]=a;
                }
                else{
                    arr[i][j]=b;
                }
            }
            else {
                arr[i][j]=arr[i-1][j];
            }
        }
    }
    return arr[n][w];
}

int main()
{
    int wt[]={1,2,3,4,5};
    int profits[]={3,2,5,1,4};
    int w=6;
    
    int maxprofit=knapsack(wt,profits,w,5);
    cout<<maxprofit;
    return 0;
}
